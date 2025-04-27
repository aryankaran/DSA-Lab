#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* front = NULL;
struct Node* rear = NULL;

void enqueue(int n) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    newNode->data = n;
    newNode->next = NULL;
    if (rear == NULL) { // Queue is empty
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }

    printf("Inserted element: %d\n", n);
}

void dequeue() {
    if (front == NULL) {
        printf("Queue is empty\n");
        return;
    }

    struct Node* temp = front;
    int removed = temp->data;
    front = front->next;
    if (front == NULL) { // Queue becomes empty
        rear = NULL;
    }

    free(temp);
    printf("Removed element: %d\n", removed);
}

void display() {
    if (front == NULL) {
        printf("Queue is empty\n");
        return;
    }

    struct Node* current = front;
    printf("Queue: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }

    printf("\n");
}

int main() {
    int choice, n;
    while (1) {
        printf("\n1. Insert an element.\n2. Delete an element.\n3. Display queue.\n4. Exit\n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter element: ");
                scanf("%d", &n);
                enqueue(n);
                break;
            
            case 2:
                dequeue();
                break;
            
            case 3:
                display();
                break;
            
            case 4:
                return 0;
            
            default:
                printf("Invalid Choice.\n");
        }
    }
    return 0;
}
