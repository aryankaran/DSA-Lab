#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};
typedef Node* Nodeptr;

class DoublyLL {
    Nodeptr head;

public:
    DoublyLL() {
        head = NULL;
    }

    ~DoublyLL() {
        Nodeptr current = head;
        while (current != NULL) {
            Nodeptr next = current->next;
            delete current;
            current = next;
        }
    }

    void insert(int data, int position);
    void del(int position);
    void displayForward();
    void displayBackward();
    int search(int data);
    void append(int data);
};

void DoublyLL::append(int data) {
    Nodeptr newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) {
        newNode->prev = NULL;
        head = newNode;
        return;
    }

    Nodeptr p = head;
    while (p->next != NULL) {
        p = p->next;
    }
    p->next = newNode;
    newNode->prev = p;
}

void DoublyLL::insert(int data, int pos) {
    if (pos <= 0) {
        cout << "Invalid position!" << endl;
        return;
    }
    
    Nodeptr newNode = new Node;
    newNode->data = data;

    if (pos == 1) {
        newNode->next = head;
        newNode->prev = NULL;
        if (head != NULL) {
            head->prev = newNode;
        }
        head = newNode;
        return;
    }

    Nodeptr p = head;
    for (int i = 1; i < pos - 1 && p != NULL; i++) {
        p = p->next;
    }

    if (p == NULL) {
        cout << "Position out of bounds!" << endl;
        delete newNode;
    } else {
        newNode->next = p->next;
        newNode->prev = p;
        if (p->next != NULL) {
            p->next->prev = newNode;
        }
        p->next = newNode;
    }
}

void DoublyLL::del(int pos) {
    if (head == NULL) {
        cout << "List is empty." << endl;
        return;
    }
    if (pos <= 0) {
        cout << "Invalid position!" << endl;
        return;
    }

    Nodeptr temp = head;
    if (pos == 1) {
        head = head->next;
        if (head != NULL) {
            head->prev = NULL;
        }
        delete temp;
        return;
    }

    for (int i = 1; i < pos && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Position out of bounds!" << endl;
    } else {
        temp->prev->next = temp->next;
        if (temp->next != NULL) {
            temp->next->prev = temp->prev;
        }
        delete temp;
    }
}

void DoublyLL::displayForward() {
    if (head == NULL) {
        cout << "List is empty." << endl;
        return;
    }
    cout << "Forward: NULL <=> ";
    Nodeptr p = head;
    while (p != NULL) {
        cout << p->data << " <=> ";
        p = p->next;
    }
    cout << "NULL" << endl;
}

void DoublyLL::displayBackward() {
    if (head == NULL) {
        cout << "List is empty." << endl;
        return;
    }
    Nodeptr p = head;
    while (p->next != NULL) {
        p = p->next;
    }
    cout << "Backward: NULL <=> ";
    while (p != NULL) {
        cout << p->data << " <=> ";
        p = p->prev;
    }
    cout << "NULL" << endl;
}

int DoublyLL::search(int data) {
    Nodeptr p = head;
    int pos = 1;
    while (p != NULL) {
        if (p->data == data) {
            return pos;
        }
        p = p->next;
        pos++;
    }
    return -1; // Not found
}

int main() {
    DoublyLL list;
    cout << "Populating list..." << endl;
    list.append(10);
    list.append(20);
    list.append(30);
    list.displayForward();

    cout << "\nInserting 5 at position 1:" << endl;
    list.insert(5, 1);
    list.displayForward();

    cout << "\nInserting 25 at position 4:" << endl;
    list.insert(25, 4);
    list.displayForward();

    cout << "\nDisplaying backward:" << endl;
    list.displayBackward();

    cout << "\nDeleting node at position 3:" << endl;
    list.del(3);
    list.displayForward();

    cout << "\nSearching for 25..." << endl;
    int pos = list.search(25);
    if (pos != -1) {
        cout << "Found 25 at position: " << pos << endl;
    } else {
        cout << "25 not found." << endl;
    }

    return 0;
}
