// Tree Depth
// Recursively compute the maximum depth (height) of a binary tree.
// Prototype: int tree_depth(TreeNode* root);
#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    struct TreeNode* left;
    struct TreeNode* right;
};

struct Node {
    struct TreeNode* treeNode;
    struct Node* next;
};

int tree_depth(struct TreeNode* root);
struct TreeNode* create_node();
void add_leaf(struct Node* stack, struct TreeNode* newNode);
void print_nodes(struct TreeNode* head);

struct TreeNode* create_tree_node() {
    struct TreeNode* newNode = malloc(sizeof(struct TreeNode));
    return newNode;
}

struct Node* push_to_stack(struct Node* head, struct TreeNode* treeNode) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->treeNode = treeNode;
    newNode->next = head;
    return newNode;
}

struct Node pop_from_stack(struct Node* head) {
    if (!head->next) return *head;
    struct Node tmpNode = *head;
    free(head);
    head = head->next;
    return tmpNode;
}

// I think I can do it with a pointer to a stack that exists outside of the add_leaf function
void slot_leaf(struct TreeNode* head, struct TreeNode* newNode) {
    struct Node* stack = malloc(sizeof(struct Node));
    stack->treeNode = head;
    add_leaf(stack, newNode);
}

void add_leaf(struct Node* stack, struct TreeNode* newNode) {
    struct Node head = pop_from_stack(stack);
    if (!head.treeNode) return;
    if (!head.treeNode->left) head.treeNode->left = newNode;
    else if (!head.treeNode->right) head.treeNode->right = newNode;
    else {
        push_to_stack(stack, head.treeNode->left);
        push_to_stack(stack, head.treeNode->right);
        add_leaf(stack, newNode);
    }
}

int tree_depth(struct TreeNode* root) {
    return 1;
}

int main() {
    struct TreeNode* treeHead = malloc(sizeof(struct TreeNode));
    int i;
    for (i = 0; i < 100; i++) {
        slot_leaf(treeHead, malloc(sizeof(struct TreeNode)));
    }
    return 1;
}
