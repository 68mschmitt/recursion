// Flatten Nested Arrays
//         Given a nested structure (arrays within arrays), recursively print all integers.
//         (For C: define a struct with possible nested “array” members.)
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    int length;
    struct Node* childNode[100];
} Node;

Node* createNode(int data) {
    Node* newNode = malloc(sizeof(Node));
    newNode->data = data;
    newNode->length = 0;
    return newNode;
}

void addNodesGivenRoot(Node *root, int startRange) {
    for (int i = 0; i < 100; i++) {
        Node *newNode = createNode(startRange);
        root->childNode[i] = newNode;
        root->length++;
        startRange++;
    }
}

Node* buildNestedArray() {
    Node *root = createNode(0);

    addNodesGivenRoot(root, 1);

    for (int i = 0; i < 100; i++) {
        addNodesGivenRoot(root->childNode[i], (i * 100) + i);
    }

    return root;
}

void print_nested_arrays(Node *root) {
    if (root->length == 0) {
        printf("%d, ", root->data);
        free(root);
    }
    else {
        for (int i = 0; i < root->length; i++) {
            print_nested_arrays(root->childNode[i]);
        }
        printf("\n\n");
    }
}

int main() {
    Node *root = buildNestedArray();
    print_nested_arrays(root);
    return 0;
}
