#include <stdio.h>
#include <stdlib.h>

struct Node {
    struct Node* left;
    int data;
    struct Node* right;
};

typedef struct Node Tree;
typedef struct Node* Nodeptr;

Nodeptr getnode() {
    Nodeptr head;
    head = (Nodeptr)malloc(sizeof(Nodeptr));
    // head->data = input_data;
    return head;
}

Nodeptr InsertBST(Nodeptr Tree, Nodeptr z) {
    // Nodeptr Tree = NULL;
    Nodeptr y = NULL;
    Nodeptr x = Tree;

    // searching
    while (x != NULL) {
        y = x;

        if (z->data < x->data) {
            x = x->left;
        } else {
            x = x->right;
        }
    }

    // inserting
    if (y == NULL) {
        Tree = z; // 1st node
    } else if (z->data < y->data) {
            y->left = z;
        } else {
            y-> right = z;
        }

    return Tree;
}



Nodeptr createBST() {
    int choice = 1;
    Nodeptr Tree = NULL;

    while(choice) {
        Nodeptr z = getnode();
        printf("Enter data: ");
        scanf("%d", &z->data);
        z->left = NULL, z->right = NULL;

        Tree = InsertBST(Tree, z);
        
        // exiting loop
        printf("Press 1 to enter next data or 0 to exit: ");
        scanf("%d", &choice);
        // printf("%d", choice)
    }

    return Tree;
}

/*
void deleteBST(Nodeptr Tree, int element) {
    Nodeptr x = Tree;
    Nodeptr y = NULL;

    // searching
    while (x != NULL) {
        y = x;

        if (element < x->data) {
            x = x->left;
        } else if (element < x->data) {
                    x = x->left;
                } else if (element != x->data) {
                        printf("Element: %d not found in Tree\n", element);
                        return 0;
                    }


        // Case I
        if (x->left )




    // Nodeptr y = NULL;
    // Nodeptr x = Tree;

    while (x != NULL) {
        y = x;

        if (z->data)
    }


}
*/


/*
inode(Nodeptr Tree) {
    if (Tree != NULL) {
        inode
    }
}
*/

void printBST_LVR(Nodeptr Tree) {
    // using LVR
    if (Tree != NULL) {
        printBST_LVR(Tree->left);
        printf("%d ", Tree->data);
        printBST_LVR(Tree->right);
    }
}


void printBST_LRV(Nodeptr Tree) {
    // using LRV
    if (Tree != NULL) {
        printBST_LRV(Tree->left);
        printBST_LRV(Tree->right);
        printf("%d ", Tree->data);
    }
}

void printBST_VLR(Nodeptr Tree) {
    // using LRV
    if (Tree != NULL) {
        printf("%d ", Tree->data);
        printBST_VLR(Tree->left);
        printBST_VLR(Tree->right);
    }
}

/*
Nodeptr searchBST(Nodeptr Tree, int z) {
    Nodeptr y = NULL;
    Nodeptr x = Tree;

    // searching
    while (x != NULL && x->data != z->data) {
        y = x;

        if (z < x->data) {
            x = x->left;
        } else {
            x = x->right;
        }
    }
    
    if (NULL != x && z == x->data){
        return x;
    } else {
        return NULL;
    }
}
*/

Nodeptr searchBST(Nodeptr T, int z) {
    Nodeptr x = T;
    while (x != NULL && x->data != z) {
        if (z < x->data) {
            x = x->left;
        } else {
            x = x->right;
        }
    }

    return x;
}


Nodeptr minimum(Nodeptr T) {
    Nodeptr x = T;

    while (x->left != NULL) {
        x = x->left;
    }

    return x;
}

Nodeptr maximum(Nodeptr T, int* counter) {
    Nodeptr x = T;

    while (x->right != NULL) {
        x = x->right;
        (*counter)++;
        printf("DEBUG: counter value %d\n", *counter);
    }

    return x;
}



Nodeptr inorderSuccessor(Nodeptr Tree, int z) {
    // search element in Tree firstly
    Nodeptr k = searchBST(Tree, z);
    
/*
    if (k != NULL){
        printf("DEBUG: searched element %d\n", k->data);
    } else {
        printf("DEBUG: node not found...\n");
    }
*/

    if (k == NULL) {
        printf("Node not found!!\n");
        return k;
    } else {
        if (k->right != NULL) {
            Nodeptr m = minimum(k->right);
            return m;
        } else {
            Nodeptr succ = NULL;
            Nodeptr T1 = Tree;

            while (T1 != k) {
                if (z < T1->data) {
                    succ = T1;
                } else {
                    T1 = T1->right;
                }
            }
            return succ;
        }
    }

}


int main() {
    Nodeptr Tree = createBST();
    printf("\n");
    printf("Tree in LVR: ");
    printBST_LVR(Tree);
    printf("\n");

    printf("Tree in LRV: ");
    printBST_LRV(Tree);
    printf("\n");

    printf("Tree in VLR: ");
    printBST_VLR(Tree);
    printf("\n");

/*
    int element;
    printf("Enter element to delete: ");
    scanf("%d", &element);
    // z = getnode();
    // z->data = element;
    deleteBST(Tree, element);
*/

    printf("Tree in LVR  after deletion: ");
    printBST_LVR(Tree);
    printf("\n");

    // int search = 3;
    int searching_element;
    printf("Enter element to seach: ");
    scanf("%d", &searching_element);

    Nodeptr in_succ = inorderSuccessor(Tree, searching_element);
    printf("Inorder successor of %d is %d\n", searching_element, in_succ->data);

    int counter = 0;
    Nodeptr max = maximum(Tree, &counter);
    printf("Maximum element %d, height: %d\n", max->data, counter);

    return 0;
}
