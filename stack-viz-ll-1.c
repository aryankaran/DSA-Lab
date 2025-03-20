#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* top = NULL;

void push(int n) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed. Unable to push.\n");
        return;
    }
    
    newNode->data = n;
    newNode->next = top;  // Link new node to the current top
    top = newNode;        // Update top pointer to new node
    printf("%d pushed to stack.\n", n);
}

void pop() {
    if (top == NULL) {
        printf("Stack is empty. Nothing to pop.\n");
        return;
    }

    struct Node* temp = top;
    int poppedValue = temp->data;
    top = top->next;  // Update top to the next node
    free(temp);
    
    printf("Popped value: %d\n", poppedValue);
}

int peek() {
    if (top == NULL) {
        printf("Stack is empty. No top element.\n");
        return -1;  // Indicates an empty stack
    }
    return top->data;
}

bool isEmpty() {
    return (top == NULL);
}


void display() {
    if (top == NULL) {
        printf("Stack is empty. Nothing to display.\n");
        return;
    }

    printf("Stack elements (top to bottom): ");

    struct Node* current = top;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    
    printf("\n");
}


int main() {
    int choice, value;
    while (true) {
        printf("\n==== Stack Menu ====\n");
        printf("1. Push an element\n");
        printf("2. Pop an element\n");
        printf("3. Display stack\n");
        printf("4. Peek at top element\n");
        printf("5. Check if stack is empty\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        printf("\n");

        switch (choice) {
            case 1:
                printf("Enter an integer to push: ");
                scanf("%d", &value);
                push(value);
                break;
            
            case 2:
                pop();
                break;
            
            case 3:
                display();
                break;
            
            case 4:
                value = peek();
                if (value != -1)
                    printf("Top element is: %d\n", value);
                break;
            
            case 5:
                printf(isEmpty() ? "The stack is empty.\n" : "The stack is not empty.\n");
                break;
            
            case 6:
                printf("Exiting the menu. Goodbye!\n");
                exit(0);
            
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    }
    return 0;
}
