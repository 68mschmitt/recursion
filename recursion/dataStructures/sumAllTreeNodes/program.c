// Sum All Tree Nodes
// Recursively sum all the values in a binary tree.
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;

int sumAllNodes(Node* root);

Node* CreateNode(int data) {
    Node* newNode = malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

Node* manuallyBuildBinaryTree() {
    // Root nod and 2 children
    Node* root = CreateNode(1);
    Node* rootLeft = CreateNode(2);
    Node* rootRight = CreateNode(3);
    root->left = rootLeft;
    root->right = rootRight;

    // Left Child Children
    Node* grandchildOne = CreateNode(4);
    Node* grandchildTwo = CreateNode(5);
    rootLeft->left = grandchildOne;
    rootLeft->right = grandchildTwo;

    // Right Child Children
    Node* grandchildThree = CreateNode(6);
    Node* grandchildFour = CreateNode(7);
    rootRight->left = grandchildThree;
    rootRight->right = grandchildFour;

    return root;
}

int sumAllNodes(Node* root) {
    if (root == NULL) return 0;
    return root->data + sumAllNodes(root->left) + sumAllNodes(root->right);
}

void runSumCode() {
    Node* root = manuallyBuildBinaryTree();

    int treeSum = sumAllNodes(root);
    printf("Sum of all tree nodes: %d\n", treeSum);
}

int main() {
    runSumCode();
    return 1;
}
