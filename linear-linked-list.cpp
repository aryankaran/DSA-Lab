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
    // Default constructor
    LinearLL() {
        head = NULL;
    }

    // Destructor to free memory
    ~LinearLL() {
        Nodeptr current = head;
        while (current != NULL) {
            Nodeptr next = current->next;
            delete current;
            current = next;
        }
    }

    void insert(int data, int position);
    void del(int position);
    void display();
    void sort();
    void reverse();
    int search(int data);
    void concat(LinearLL& list2);
    void append(int data); // Helper to add to the end
};

void LinearLL::append(int data) {
    Nodeptr newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        Nodeptr p = head;
        while (p->next != NULL) {
            p = p->next;
        }
        p->next = newNode;
    }
}

void LinearLL::display() {
    if (head == NULL) {
        cout << 