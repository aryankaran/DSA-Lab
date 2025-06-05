#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

typedef struct Node *Nodeptr;
typedef struct Node list;
typedef list Node;


Nodeptr getnode() {
    Nodeptr head;
    head = (Nodeptr)malloc(sizeof(struct Node));
    return head;
}


Nodeptr InsertBegin(list* head) {
    Nodeptr p = getnode();
    // Data
    printf("Enter data: ");
    scanf("%d", &p->data);

    p->next = NULL;
    if (head != NULL) {
        p->next = head;
        head = p;
    } else {
        head = p;
    }
    
    return head;
}

void InsertEnd(list* head) {
    Nodeptr p = getnode();
    // Data
    printf("Enter data: ");
    scanf("%d", &p->data);

    Nodeptr q = head;
    while (q->next != NULL) {
        q = q->next;
    }

    q->next = p;
    p->next = NULL;
}


Nodeptr Insert_any_position(list* head, int pos) {
    if (pos == 1 ) {
        head = InsertBegin(head);
        return head;
    }

    Nodeptr p, q, r;

    q = head->next;
    while (--pos && q != NULL) {
        r = q;
        q = q->next;
    }

    if (q != NULL){

        // Get data only if in between
        p = getnode();
        p->next = q;
        printf("Enter Data: ");
        scanf("%d", &p->data);

        r->next = p;
    } else {
        // Check out of list , i.e beyond list as q != NULL checked
        if (pos > 0) {
            printf("Out of list !!!\n");
        } else {
            InsertEnd(head);
        }
    }

    return head;
}


/*
Nodeptr InsertBetween(Nodeptr head, int pos) {
    Nodeptr p = getnode();
    // Data
    scanf("%d", &p->data);

    Nodeptr q = head;

    while (--pos && q != NULL) {
        q = q->next;
    }
}
*/

list *createlist() {
    list *head = NULL, *p, *q;
    int choice = 1;
    while (choice == 1) {
        p = getnode();
        printf("Enter data: ");
        scanf("%d", &p->data);
        p->next = NULL;
        if (head == NULL) {
            head = p;
            q = p;
        } else {
            q->next = p;
            q = p;
        }
        printf("Press 1 to enter next data or 2 to exit: ");
        scanf("%d", &choice);
    }
    return head;
}



void displaylist(list* head) {
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




list* deleteEndNode(list* head) {
    Nodeptr p = head;
    Nodeptr r;
    while (p->next != NULL) {
        r = p;
        p = p->next;
    }
    r->next = NULL;
    free(p);
}

Nodeptr delBegin(Nodeptr head) {
    Nodeptr p = head;
    head = p->next;

    // Display data being deleted
    printf("Deleting data: %d\n", p->data);
    free(p);

    return head;
}

Nodeptr delNode(Nodeptr head, int pos) {
    list *p = head, *r;

    if (pos == 1) {
        head = delBegin(head);
        return head;
    }

    while (--pos && p != NULL) {
        r = p;
        p = p->next;
    }

    if (p != NULL) {
        r->next = p->next;
        
        // Display deleting data
        printf("Deleting data: %d\n", p->data);
        free(p);
    }
    return head;
}


list* concatList(list* head1, list* head2) {
    if (head1 != NULL && head2 != NULL) {
        Nodeptr p = head1;

        while (p->next != NULL) {
            p = p->next;
        }

        p->next = head2;
        return head1;
    }

    if (head2 != NULL) {
        return head2;
    }

    if (head2 == NULL) {
        printf("Both lists empty!\n");
        return head1;
    }
    
}


list* bubbleSort(list* head) {
    for (list* p = head; p->next != NULL; p = p->next) {
        for (list* q = p->next; q != NULL; q = q->next) {
            if (p->data > q->data) {
                //swap
                int temp = p->data;
                p->data = q ->data;
                q->data = temp;
            }
        }
    }
    return head;
}



list* reverseList(list* head) {
    Nodeptr p, q, r;
    p = head;
    q = NULL;

    while (p != NULL) {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }

    head = q;
    return head;
}


list* linearSearch(list* head, int n) {
    list* p = head;
    int counter = 1;
    while (p != NULL) {
        if (p->data == n) {
            printf("Found %d at position: %d\n", n, counter);
            break;
        } else {
            p = p->next;
            counter++;
        }
    }

    if (p == NULL) {
        printf("Not found\n");
    }

    return head;
}


int main() {
    list *head = NULL;
    int choice, pos;
    while (1) {
        printf("1. Create list \n2. Display list \n3. Insert between \n4. Delete a certain node \n5. Concatenate two lists \n6. Sort \n7. Reverse List \n8. Search \n9. Exit\n");
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
                printf("Enter the postition: ");
                scanf("%d", &pos);

                head = Insert_any_position(head, pos);
                break;
/*
            case 4:
                head = InsertBegin(head);
                break;

            case 5:
                head = InsertEnd(head);
                break;
*/

            case 4:
                // Get node position
                printf("Enter node position to delete: ");
                scanf("%d", &pos);

                printf("Original List: ");
                displaylist(head);
                head = delNode(head, pos);
                printf("Updated List: ");
                displaylist(head);
                break;

            case 5:
                printf("Enter 1st List data:-> \n");
                list* head1 = createlist();
                printf("Enter 2nd List data:-> \n");
                list* head2 = createlist();

                printf("List 1: ");
                displaylist(head1);

                printf("List 2: ");
                displaylist(head2);

                head = concatList(head1, head2);
                printf("Combined list: ");
                displaylist(head);
                break;

            case 6:
                printf("Original List: ");
                displaylist(head);

                head = bubbleSort(head);
                printf("Sorted   List: ");
                displaylist(head);
                break;

            case 7:
                printf("Original List: ");
                displaylist(head);

                head = reverseList(head);

                printf("Reversed List: ");
                displaylist(head);
                break;

            case 8:
                int n;
                printf("eNter data to search: ");
                scanf("%d", &n);

                linearSearch(head, n);
                break;

            case 9:
                return 0;

            default:
                printf("Invalid choice !!\n");
        }
    }
}
