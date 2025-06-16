// Tree Depth
// Recursively compute the maximum depth (height) of a binary tree.
// Prototype: int tree_depth(TreeNode* root);
#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
} TreeNode;


int tree_depth(TreeNode* root);
void print_tree(TreeNode* root);
TreeNode* createNode(int data);

TreeNode* createNode(int data) {
    TreeNode* newNode = malloc(sizeof(TreeNode));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

void print_tree(TreeNode* root) {
    if (root == NULL) return;
    printf("%d\n", root->data);
    print_tree(root->left);
    print_tree(root->right);
}

int tree_depth(TreeNode* root) {
    return 0;
}

void run_tree_depth() {
    TreeNode* root;
    tree_depth(root);
    // The tree depth should be 3
    int treeData[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    TreeNode* nodeOne = createNode(treeData[0]);
    TreeNode* nodeTwo = createNode(treeData[1]);
    TreeNode* nodeThree = createNode(treeData[2]);
    TreeNode* nodeFour = createNode(treeData[3]);
    TreeNode* nodeFive = createNode(treeData[4]);
    TreeNode* nodeSix = createNode(treeData[5]);
    TreeNode* nodeSeven = createNode(treeData[6]);
    TreeNode* nodeEight = createNode(treeData[7]);
    TreeNode* nodeNine = createNode(treeData[8]);

    nodeFive->left = nodeFour;
    nodeFive->right = nodeSix;

    nodeFour->left = nodeTwo;
    nodeFour->right = nodeThree;

    nodeTwo->left = nodeOne;

    nodeSix->left = nodeSeven;
    nodeSix->right = nodeEight;

    nodeEight->left = nodeNine;

    print_tree(nodeFive);
    int depth = tree_depth(nodeFive) - 1;
    printf("The depth of the tree is %d\n", depth);
}

int main() {
    run_tree_depth();
    return 1;
}
