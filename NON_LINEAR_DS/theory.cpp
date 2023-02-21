#include <iostream>
#include <queue>

using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

// Create a new node with given data
Node* createNewNode(int data) {
    Node* node = new Node;
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// Breadth-first search traversal of the tree
void bfs(Node* root) {
    if (root == NULL) {
        return;
    }
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        Node* curr = q.front();
        q.pop();
        cout << curr->data << " ";
        if (curr->left != NULL) {
            q.push(curr->left);
        }
        if (curr->right != NULL) {
            q.push(curr->right);
        }
    }
}

// Inorder traversal of the tree
void inorder(Node* root) {
    if (root == NULL) {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Preorder traversal of the tree
void preorder(Node* root) {
    if (root == NULL) {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// Postorder traversal of the tree
void postorder(Node* root) {
    if (root == NULL) {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main() {
    // Build the binary tree
    Node* root = createNewNode(20);
    root->left = createNewNode(10);
    root->right = createNewNode(22);
    root->left->left = createNewNode(5);
    root->left->right = createNewNode(12);
    root->left->left->left = createNewNode(3);
    root->left->left->right = createNewNode(15);
    root->right->left = createNewNode(21);
    root->right->right = createNewNode(25);

    // Traverse the tree
    cout << "BFS traversal: ";
    bfs(root);
    cout << endl;

    cout << "Inorder traversal: ";
    inorder(root);
    cout << endl;

    cout << "Preorder traversal: ";
    preorder(root);
    cout << endl;

    cout << "Postorder traversal: ";
    postorder(root);
    cout << endl;

    return 0;
}
