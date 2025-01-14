#include <stdio.h>
#include <stdlib.h>

/*
sruct Node {
    int data;
    struct Node *next;
};
*/

struct Node {
    struct Node* previous;
    int data;
    struct Node* next;
};

typedef struct Node* Nodeptr;
typedef struct Node dblist;
typedef struct Node list;

Nodeptr getnode() {
    Nodeptr head;
    head = (Nodeptr)malloc(sizeof(dblist));
    return head;
}

Nodeptr InsertBegin(dblist* head) {
    Nodeptr p = getnode();
    // Data
    printf("Enter data: ");
    scanf("%d", &p->data);

    p->previous = NULL;
    if (head != NULL) {
        head->previous = p;
        p->next = head;
        head = p;
    } else {
        head = p;
        return head;
    }
}

Nodeptr InsertEnd(dblist* head) {
    Nodeptr p = getnode(), q;
    // Data
    printf("Enter data: ");
    scanf("%d", &p->data);
    p->next = NULL;

    q = head;

    if (head != NULL) {
        // traverse to end
        while (q->next != NULL) {
            q = q->next;
        }

        // attach at the end
        q->next = p;
        p->previous = q;

    return head;

    } else {
        head = p;
        return head;
    }
}


/*
Nodeptr InsertAnyPos(Nodeptr head, int pos) {
    Nodeptr p = getnode();
    // Data
    scanf("%d", &p->data);

    Nodeptr q = head;

    while (--pos && q != NULL) {
        q = q->next;
    }
}
*/


Nodeptr Insert_any_position(list* head, int pos) {
    if (pos == 1 ) {
        head = InsertBegin(head);
        return head;
    }

    Nodeptr p = getnode(), q, r;

    // no dangling pointers
    p->next = NULL;
    p->previous = NULL;

    if (head == NULL && pos != 1) {
        printf("Empty List & inserting beyond first pos !!!\n");
        return head;
    }

    q = head;
    // r = q;
    while (--pos && q != NULL) {
        r = q;
        q = q->next;
    }


    if (q != NULL){
        p->next = q;
        p->previous = r;
        r->next = p;
        q->previous = p; 

        // Get data only if in between
        printf("Enter Data: ");
        scanf("%d", &p->data);

    } else {
        // Check out of list , i.e beyond head as q != head checked
        if (pos > 0) {
            printf("Out of list !!!\n");
        } else {
            head = InsertEnd(head);
        }
    }

    return head;
}



list* createlist() {
    Nodeptr head = NULL, p, q;
    int choice = 1;
    while (choice == 1) {
        p = getnode();
        printf("Enter data: ");
        scanf("%d", &p->data);
        p->next = NULL;

        if (head == NULL) {
            head = p;
            q = p;
            head->previous = NULL;
        } else {
            q->next = p;
            p->previous = q;
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
        list *p = head, *q;

        printf("Forward: ");
        while (p != NULL) {
            printf("%d->", p->data);
            q = p;
            p = p->next;
        }
        printf("NULL\n");

        printf("Reverse: ");
        while (q != NULL) {
            printf("%d->", q->data);
            q = q->previous;
        }
        printf("NULL\n");
    }
}


// Redundant
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
    head->previous = NULL;

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
        (p->next)->previous = r;

        // Display deleting data
        printf("Deleting data: %d\n", p->data);
        free(p);
    }
    return head;
}



// Single :->

// Nodeptr delNode(Nodeptr head, int pos) {
//     list *p = head, *r;

//     /* TODO: delBegin function
//         if (pos == 1) {
//             head = deleteBegin(head);
//             return head;
//         }
//     */

//     while (--pos && p != NULL) {
//         r = p;
//         p = p->next;
//     }

//     if (p != NULL) {
//         r->next = p->next;

//         // Display deleting data
//         printf("Deleting data: %d\n", p->data);
//         free(p);
//     }
//     return head;
// }



list* concatList(list* head1, list* head2) {
    if (head1 != NULL && head2 != NULL) {
        Nodeptr p = head1;

        while (p->next != NULL) {
            p = p->next;
        }

        p->next = head2;
        head2->previous = p;
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
                // swap
                int temp = p->data;
                p->data = q->data;
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

int guard(Nodeptr head) {
    if (head == NULL) {
        printf("Can't operate on an empty list !!! \n");
        return 1;
    }
    return 0;
}


int main() {
    list* head = NULL;
    int choice, pos;
    while (1) {
        printf("1. Create list\n2. Display list\n3. Insert at any postion \n4. Delete a certain node \n5. Concatenate two lists \n6. Sort \n7. Reverse List \n8. Search \n9. Exit\n");
/*
4. Insert at beginning\n5. Insert at end \n
*/
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                head = createlist();
                break;

            case 2:
                displaylist(head);
                break;
/*
            case 4:
                head = InsertBegin(head);
                break;

            case 5:
                head = InsertEnd(head);
                break;
*/
            case 3:
                printf("Enter the postition: ");
                scanf("%d", &pos);

                head = Insert_any_position(head, pos);
                break;

            case 4:
                if ( guard(head) )  break;

                // Get node position
                printf("Enter node position to delete: ");
                scanf("%d", &pos);

                printf("Original List:-> \n");
                displaylist(head);
                head = delNode(head, pos);
                printf("Updated List:-> \n");
                displaylist(head);
                break;

            case 5:
                printf("Enter 1st List data:-> \n");
                list* head1 = createlist();
                printf("Enter 2nd List data:-> \n");
                list* head2 = createlist();

                printf("List 1:-> \n");
                displaylist(head1);

                printf("List 2:-> \n");
                displaylist(head2);

                head = concatList(head1, head2);
                printf("Combined list:-> \n");
                displaylist(head);
                break;

            case 6:
                if ( guard(head) )  break;

                head = bubbleSort(head);
                displaylist(head);
                break;

            case 7:
                if ( guard(head) )  break;

                head = reverseList(head);
                printf("Reversed List:-> \n");
                displaylist(head);
                break;

            case 8:
                if ( guard(head) )  break;

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




/*
- DLL done  ✅
- Circular DLL

- Insert
- Delete 
- Concat

- Circular DLL

Array :->
- Quick sort
Merge Sort
Radix sort


Tree :-
- Insert
- Display, Inorder : usccesssor, Preorder, postorder, infix, postfix
- delete node from tree : child (left, right)

*/