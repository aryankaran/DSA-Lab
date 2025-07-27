#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};
typedef Node* Nodeptr;

class BST {
    Nodeptr root;

    void insert(Nodeptr& node, int data);
    bool search(Nodeptr node, int data);
    void inOrder(Nodeptr node);
    void preOrder(Nodeptr node);
    void postOrder(Nodeptr node);
    void destroyTree(Nodeptr node);

public:
    BST() {
        root = NULL;
    }

    ~BST() {
        destroyTree(root);
    }

    void insert(int data) {
        insert(root, data);
    }

    bool search(int data) {
        return search(root, data);
    }

    void displayInOrder() {
        cout << "In-order Traversal: ";
        inOrder(root);
        cout << endl;
    }

    void displayPreOrder() {
        cout << "Pre-order Traversal: ";
        preOrder(root);
        cout << endl;
    }

    void displayPostOrder() {
        cout << "Post-order Traversal: ";
        postOrder(root);
        cout << endl;
    }
};

void BST::destroyTree(Nodeptr node) {
    if (node) {
        destroyTree(node->left);
        destroyTree(node->right);
        delete node;
    }
}

void BST::insert(Nodeptr& node, int data) {
    if (node == NULL) {
        node = new Node;
        node->data = data;
        node->left = NULL;
        node->right = NULL;
        return;
    }

    if (data < node->data) {
        insert(node->left, data);
    } else {
        insert(node->right, data);
    }
}

bool BST::search(Nodeptr node, int data) {
    if (node == NULL) {
        return false;
    }
    if (node->data == data) {
        return true;
    }
    if (data < node->data) {
        return search(node->left, data);
    } else {
        return search(node->right, data);
    }
}

void BST::inOrder(Nodeptr node) {
    if (node == NULL) return;
    inOrder(node->left);
    cout << node->data << " ";
    inOrder(node->right);
}

void BST::preOrder(Nodeptr node) {
    if (node == NULL) return;
    cout << node->data << " ";
    preOrder(node->left);
    preOrder(node->right);
}

void BST::postOrder(Nodeptr node) {
    if (node == NULL) return;
    postOrder(node->left);
    postOrder(node->right);
    cout << node->data << " ";
}

int main() {
    BST tree;
    cout << "Inserting nodes: 50, 30, 70, 20, 40, 60, 80" << endl;
    tree.insert(50);
    tree.insert(30);
    tree.insert(70);
    tree.insert(20);
    tree.insert(40);
    tree.insert(60);
    tree.insert(80);

    tree.displayInOrder();
    tree.displayPreOrder();
    tree.displayPostOrder();

    cout << "\nSearching for 40: " << (tree.search(40) ? "Found" : "Not Found") << endl;
    cout << "Searching for 90: " << (tree.search(90) ? "Found" : "Not Found") << endl;

    return 0;
}
