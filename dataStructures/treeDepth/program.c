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

int tree_depth(TreeNode* root) {
    return 1;
}

void run_tree_depth() {
    TreeNode* root;
    tree_depth(root);
    printf("Hello, World!\n");
}

int main() {
    run_tree_depth();
    return 1;
}
