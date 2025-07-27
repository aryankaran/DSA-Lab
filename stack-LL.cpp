#include <iostream>

using namespace std;

// Node structure for the linked list
struct Node {
    int data;
    Node* next;
};

// Define Nodeptr for convenience
typedef Node* Nodeptr;

class Stack {
    Nodeptr top;

public:
    // Constructor to initialize an empty stack
    Stack() {
        top = NULL;
    }

    void push(int n);
    int pop();
    void display();
};

void Stack::push(int n) {
    // Create a new node
    Nodeptr newNode = new Node;
    newNode->data = n;
    
    // Link the new node to the top of the stack
    newNode->next = top;
    
    // Update top to the new node
    top = newNode;
}

int Stack::pop() {
    if (top == NULL) {
        cout << "Stack is empty\n";
        return 0; // Return a default value for an empty stack
    }

    // Get the data from the top node
    int n = top->data;
    
    // Move top to the next node
    Nodeptr temp = top;
    top = top->next;
    
    // Free the old top node
    delete temp;
    
    return n;
}

void Stack::display() {
    if (top == NULL) {
        cout << "Empty stack !!!\n";
        return;
    }

    Nodeptr current = top;
    cout << "Stack (top to bottom): ";
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
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
                cin >> n;
                stack.push(n);
                break;
            }

            case 2: {
                int popped_val = stack.pop();
                if (popped_val != 0) { // A simple check to see if pop was successful
                    cout << "Popped element: " << popped_val << endl;
                    cout << "Stack after pop: ";
                    stack.display();
                }
                break;
            }
            
            case 3: {
                stack.display();
                break;
            }

            case 4:
                return 0;
            
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }
}
