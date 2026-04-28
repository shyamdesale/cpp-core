// 2. Binary Tree Height

#include <iostream>
#include <algorithm>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

// Function to find the height of a binary tree
int getHeight(Node* node) {
    // Base Case: Empty node has height 0
    if (node == nullptr) return 0;

    // Multiple Recursion Calls: Height of Left subtree and Right subtree
    int lh = getHeight(node->left);
    int rh = getHeight(node->right);

    // Height is 1 (current node) + maximum of left or right subtree
    return 1 + max(lh, rh);
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);

    cout << "Height of tree: " << getHeight(root) << endl;
    return 0;
}