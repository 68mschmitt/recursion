// Tree Depth
// Recursively compute the maximum depth (height) of a binary tree.
// Prototype: int tree_depth(TreeNode* root);
#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int value;
    struct TreeNode* left;
    struct TreeNode* right;
};

struct QueueNode {
    struct TreeNode* value;
    struct QueueNode* next;
};

void enqueue(struct QueueNode* head, struct TreeNode* value) {
    struct QueueNode* newItem = malloc(sizeof(struct QueueNode));
    newItem->value = value;
    struct QueueNode* focusItem = head;
    while (focusItem->next) focusItem = focusItem->next;
    focusItem->next = newItem;
}

struct TreeNode* build_tree() {
    struct QueueNode* queue = malloc(sizeof(struct QueueNode));
    struct TreeNode* head = malloc(sizeof(struct TreeNode));
    enqueue(head, queue);
    unsigned i;
    unsigned count = 20;
    for (i = 0; i < 20; i++) {
        // Fill in the left
        // Add the left to the stack
        // Fill in the right
        // Add the right to the stack
        // Dequeue the next node
    }
}

int tree_depth(struct TreeNode* root);

int tree_depth(struct TreeNode* root) {
    return 1;
}

void run_tree_depth() {
    struct TreeNode* head;
    tree_depth(head);
}

int main() {
    run_tree_depth();
    return 1;
}
