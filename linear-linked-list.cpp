/*
A-9:-> Write a program using class to peform the following operations on a linear linked list 

    i) Insertion
    ii) deletion
    iii) display
    iv) sorting
    v) reverse
    vi) searching
    vii) conactenation
*/


#include <iostream>

using namespace std;

struct Node {
    int data;
    struct Node* next;
};
typedef struct Node* Nodeptr;

class LinearLL {
    Nodeptr head;

    public:
        void insert(int data, int position);
        void del(Node* node);
        
        void display();
        void sort();
        int search(int data);
        LinearLL concat(LinearLL* list2);

        // default constructor
        LinearLL() {
            head = new Node;
            head->next = NULL;
            
            // dummy data
            head->data = 59;

            Nodeptr p = head;
            for (int i = 5; i <= 12; i++){
                Nodeptr temp = new Node;
                temp->data = i;
                temp->next = NULL;

                p->next = temp;
                p = temp;
            }

        }

};


void LinearLL::display() {
    Nodeptr nxt = head->next;
    cout << head->data;

    while (nxt != NULL){
        cout << " -> " << nxt->data;
        nxt = nxt->next;
    }

    cout << " -> NULL" << endl;
}


void LinearLL::insert(int data, int pos) {
    Nodeptr temp = new Node;
    temp->data = data;
    
    // if (pos == 1 ) {
    //     head = InsertBegin(head);
    //     return head;
    // }


    Nodeptr p, q, r;
    q = head->next;

    while (--pos && q != NULL) {
        r = q;
        q = q->next;
    }

    if (q != NULL){

        // Get data only if in between
        p = new Node;
        p->next = q;
        p->data = data;
        // cout << "Enter Data: "; cin >> p->data;
        r->next = p;

    } else {
        // Check out of list , i.e beyond list as q != NULL checked
        if (pos > 0) {
            cout << "Out of list !!!\n";
        } else {
            InsertEnd(head);
        }
    }

}

int main() {
    LinearLL list;
    list.display();
    list.insert(4, 20);
    // cout << "Lis after Insertion: \n" ; 
    list.display();
}