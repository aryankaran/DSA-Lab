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
        cout << "List is empty." << endl;
        return;
    }
    Nodeptr nxt = head;
    while (nxt != NULL) {
        cout << nxt->data << " -> ";
        nxt = nxt->next;
    }
    cout << "NULL" << endl;
}

void LinearLL::insert(int data, int pos) {
    Nodeptr newNode = new Node;
    newNode->data = data;

    if (pos <= 0) {
        cout << "Invalid position!" << endl;
        delete newNode;
        return;
    }

    if (pos == 1) {
        newNode->next = head;
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
        p->next = newNode;
    }
}

void LinearLL::del(int pos) {
    if (head == NULL) {
        cout << "List is empty." << endl;
        return;
    }
    if (pos <= 0) {
        cout << "Invalid position!" << endl;
        return;
    }

    Nodeptr temp;
    if (pos == 1) {
        temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Nodeptr p = head;
    for (int i = 1; i < pos - 1 && p->next != NULL; i++) {
        p = p->next;
    }

    if (p->next == NULL) {
        cout << "Position out of bounds!" << endl;
    } else {
        temp = p->next;
        p->next = temp->next;
        delete temp;
    }
}

void LinearLL::sort() {
    if (head == NULL || head->next == NULL) return;

    for (Nodeptr p = head; p->next != NULL; p = p->next) {
        for (Nodeptr q = p->next; q != NULL; q = q->next) {
            if (p->data > q->data) {
                int temp = p->data;
                p->data = q->data;
                q->data = temp;
            }
        }
    }
}

void LinearLL::reverse() {
    if (head == NULL || head->next == NULL) return;

    Nodeptr prev = NULL, current = head, next = NULL;
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}

int LinearLL::search(int data) {
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

void LinearLL::concat(LinearLL& list2) {
    if (list2.head == NULL) return;

    if (head == NULL) {
        head = list2.head;
    } else {
        Nodeptr p = head;
        while (p->next != NULL) {
            p = p->next;
        }
        p->next = list2.head;
    }
    // Prevent list2 from deleting the concatenated nodes
    list2.head = NULL;
}

int main() {
    LinearLL list1;
    int choice, data, pos;

    while (true) {
        cout << "\n--- Linear Linked List Menu ---" << endl;
        cout << "1. Append (add to end)" << endl;
        cout << "2. Insert at position" << endl;
        cout << "3. Delete from position" << endl;
        cout << "4. Display list" << endl;
        cout << "5. Sort list" << endl;
        cout << "6. Reverse list" << endl;
        cout << "7. Search for element" << endl;
        cout << "8. Concatenate with a new list" << endl;
        cout << "9. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter data to append: ";
                cin >> data;
                list1.append(data);
                cout << "Current list: ";
                list1.display();
                break;
            case 2:
                cout << "Enter data to insert: ";
                cin >> data;
                cout << "Enter position: ";
                cin >> pos;
                list1.insert(data, pos);
                cout << "Current list: ";
                list1.display();
                break;
            case 3:
                cout << "Enter position to delete: ";
                cin >> pos;
                list1.del(pos);
                cout << "Current list: ";
                list1.display();
                break;
            case 4:
                list1.display();
                break;
            case 5:
                list1.sort();
                cout << "Sorted list: ";
                list1.display();
                break;
            case 6:
                list1.reverse();
                cout << "Reversed list: ";
                list1.display();
                break;
            case 7:
                cout << "Enter data to search for: ";
                cin >> data;
                pos = list1.search(data);
                if (pos != -1) {
                    cout << "Element " << data << " found at position: " << pos << endl;
                } else {
                    cout << "Element " << data << " not found in the list." << endl;
                }
                break;
            case 8: {
                LinearLL list2;
                int n, val;
                cout << "How many elements in the second list? ";
                cin >> n;
                for (int i = 0; i < n; ++i) {
                    cout << "Enter element " << i + 1 << ": ";
                    cin >> val;
                    list2.append(val);
                }
                cout << "Second list: ";
                list2.display();
                list1.concat(list2);
                cout << "Concatenated list: ";
                list1.display();
                break;
            }
            case 9:
                cout << "Exiting." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
    return 0;
}
