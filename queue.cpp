#include <iostream>

using namespace std;
const int SIZE = 5;

class Queue {
    int queue[SIZE];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    void enqueue(int n);
    int dequeue();
    void display();
};

void Queue::enqueue(int n) {
    if (rear == SIZE - 1) {
        cout << "Queue is full" << endl;
        return;
    }
    if (front == -1) {
        front = 0;
    }
    rear++;
    queue[rear] = n;
}

int Queue::dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty" << endl;
        // Reset queue when it becomes empty
        front = -1;
        rear = -1;
        return 0;
    }
    int n = queue[front];
    front++;
    return n;
}

void Queue::display() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty" << endl;
        return;
    }
    cout << "Queue (front to rear): ";
    for (int i = front; i <= rear; i++) {
        cout << queue[i] << " ";
    }
    cout << endl;
}

int main() {
    Queue q;
    int choice;

    while (1) {
        cout << "\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int n;
                cout << "Enter element: ";
                cin >> n;
                q.enqueue(n);
                cout << "Queue after enqueue: ";
                q.display();
                break;
            }
            case 2: {
                int dequeued_val = q.dequeue();
                if (dequeued_val != 0) {
                    cout << "Dequeued element: " << dequeued_val << endl;
                    cout << "Queue after dequeue: ";
                    q.display();
                }
                break;
            }
            case 3: {
                q.display();
                break;
            }
            case 4:
                return 0;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }
}
