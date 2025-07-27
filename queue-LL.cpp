#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};
typedef Node* Nodeptr;

class Queue {
    Nodeptr front, rear;

public:
    Queue() {
        front = NULL;
        rear = NULL;
    }

    ~Queue() {
        while (front != NULL) {
            Nodeptr temp = front;
            front = front->next;
            delete temp;
        }
    }

    void enqueue(int n);
    int dequeue();
    void display();
};

void Queue::enqueue(int n) {
    Nodeptr newNode = new Node;
    newNode->data = n;
    newNode->next = NULL;

    if (rear == NULL) {
        front = rear = newNode;
        return;
    }
    rear->next = newNode;
    rear = newNode;
}

int Queue::dequeue() {
    if (front == NULL) {
        cout << "Queue is empty" << endl;
        return 0;
    }
    Nodeptr temp = front;
    int n = temp->data;
    front = front->next;

    if (front == NULL) {
        rear = NULL;
    }
    delete temp;
    return n;
}

void Queue::display() {
    if (front == NULL) {
        cout << "Queue is empty" << endl;
        return;
    }
    cout << "Queue (front to rear): ";
    Nodeptr p = front;
    while (p != NULL) {
        cout << p->data << " ";
        p = p->next;
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
