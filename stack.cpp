#include <iostream>

using namespace std;
const int SIZE = 5;

class Stack
{
    int stack[SIZE];
    int top = -1;

    public:
        void push(int n) {
            if (top >= SIZE-1) {
                cout << "Stack is full\n";
            } else {
                top++;
                stack[top] = n;
            }
        }

        int pop();
        void display();
};


int Stack::pop() {
    if (top < 0) {
        cout << "Stack is empty\n";
        return 0;
    } else
    {
        int n = stack[top--];
        return n;
    }
}


void Stack::display() {
    if (top < 0) {
        cout << "Empty stack !!!\n";
        return;
    }

    for (int i = 0; i <= top ; i++) {
        cout << stack[i] << " ";
    }
    cout << endl;
}


int main() {
    Stack stack;
    int choice;

    while (1) {
        cout << "1. Push \n2. Pop \n3. Display \n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            
            case 1: {
                int n;
                cout << "Enter element: ";
                cin >> n ;
                stack.push(n);
                break;
            }

            case 2: {
                int pop = stack.pop();
                cout << "Popped element: " << pop << endl;
                break;
            }
            
            case 3: {
                stack.display();
                break;
            }

            case 4:
                return 0;
        }
    }
}