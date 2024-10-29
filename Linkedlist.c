#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};


typedef struct Node list;

list *getnode() {
    list *head;
    head = (list *)malloc(sizeof(int));
    return head;
}

list *createlist() {
    list *head = NULL, *p, *q;
    int choice = 1; 
    while (choice == 1) {
        p = getnode();
        printf("Enter data");
        scanf("%d", &p->data);
        p->next = NULL;
        if (head == NULL) {
            head = p;
            q = p;
        } else {
            q->next = p;
            q = p;
        }
        printf("Press-1 to continue\nPress-2 to exit\n");
        scanf("%d", &choice);
    }
    return head;
}

void displaylist(list *head) {
    if (head == NULL) {
        printf("Empty list\n");
    } else {
        list *p = head;
        while (p != NULL) {
            printf("%d->", p->data);
            p = p->next;
        }
        printf("NULL\n");
    }
}

int main() {
    list *head = NULL;
    int choice;
    while (1) {
        printf("1.Create list\n2.Display list\n3.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                head = createlist();
                break;
            case 2:
                displaylist(head);
                break;
            case 3:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}