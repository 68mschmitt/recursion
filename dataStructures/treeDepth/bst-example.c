#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
} TreeNode;

TreeNode* createNode(int data) {
    TreeNode* newNode = malloc(sizeof(TreeNode));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void insert(TreeNode** root, int data) {
    TreeNode* newNode = createNode(data);
    if (*root == NULL) {
        *root = newNode;
        return;
    }

    TreeNode* temp;
    TreeNode* queue[100];
    int front = -1, rear = -1;
    queue[++rear] = *root;

    while (front != rear) {
        temp = queue[++front];
        if (temp->left == NULL) {
            temp->left = newNode;
            return;
        } else {
            queue[++rear] = temp->left;
        }

        if (temp->right == NULL) {
            temp->right = newNode;
            return;
        } else {
            queue[++rear] = temp->right;
        }
    }
}

TreeNode* getDeepestRightmostNode(TreeNode* root) {
    TreeNode* temp;
    TreeNode* queue[100];
    int front = -1, rear = -1;
    queue[++rear] = root;

    while (front != rear) {
        temp = queue[++front];

        if (temp->left != NULL) {
            queue[++rear] = temp->left;
        }

        if (temp->right != NULL) {
            queue[++rear] = temp->right;
        }
    }
    return temp;
}

void deleteDeepestRightmostNode(TreeNode* root, TreeNode* dNode) {
    TreeNode* temp;
    TreeNode* queue[100];
    int front = -1, rear = -1;
    queue[++rear] = root;

    while (front != rear) {
        temp = queue[++front];

        if (temp == dNode) {
            temp = NULL;
            free(dNode);
            return;
        }

        if (temp->right != NULL) {
            if (temp->right == dNode) {
                temp->right = NULL;
                free(dNode);
                return;
            } else {
                queue[++rear] = temp->right;
            }
        }

        if (temp->left != NULL) {
            if (temp->left == dNode) {
                temp->left = NULL;
                free(dNode);
                return;
            } else {
                queue[++rear] = temp->left;
            }
        }

    }
}

void delete (TreeNode** root, int data) {
    if (*root == NULL) {
        printf("Tree is empty.\n");
        return;
    }

    if ((*root)->left == NULL && (*root)->right == NULL) {
        if ((*root)->data == data) {
            free(*root);
            *root = NULL;
            return;
        } else {
            printf("Node not found.\n");
        }
    }

    TreeNode* temp;
    TreeNode* queue[100];
    int front = -1, rear = -1;
    queue[++rear] = *root;
    TreeNode* keyNode = NULL;

    while (front != rear) {
        temp = queue[++front];

        if (temp->data == data) {
            keyNode = temp;
        }
        
        if (temp->left != NULL) {
            queue[++rear] = temp->left;
        }

        if (temp->right != NULL) {
            queue[++rear] = temp->right;
        }
    }

    if (keyNode != NULL) {
        TreeNode* deepestNode = getDeepestRightmostNode(*root);
        keyNode->data = deepestNode->data;
        deleteDeepestRightmostNode(*root, deepestNode);
    } else {
        printf("Node not found.\n");
    }
}

TreeNode* search(TreeNode* root, int data) {
    if (root == NULL) {
        return NULL;
    }

    TreeNode* temp;
    TreeNode* queue[100];
    int front = -1, rear = -1;
    queue[++rear] = root;

    while (front != rear) {
        temp = queue[++front];

        if (temp->data == data) {
            return temp;
        }

        if (temp->left != NULL) {
            queue[++rear] = temp->right;
        }

        if (temp->right != NULL) {
            queue[++rear] = temp->right;
        }
    }
    return NULL;
}

void inorderTraversal(TreeNode* root) {
    if (root == NULL) {
        return;
    }

    inorderTraversal(root->left);
    printf("%d ", root->data);
    inorderTraversal(root->right);
}

int main() {
    TreeNode* root = NULL;

    // Inserting nodes
    insert(&root, 20);
    insert(&root, 30);
    insert(&root, 40);
    insert(&root, 50);
    insert(&root, 60);
    insert(&root, 70);
    insert(&root, 80);

    // Inorder traversal
    printf("Inorder traversal of the given Binary Search "
            "Tree is: ");
    inorderTraversal(root);
    printf("\n");

    // Deleting a node
    int deleteValue = 20;
    delete(&root, deleteValue);
    printf("After deletion of %d: ", deleteValue);
    inorderTraversal(root);
    printf("\n");

    // Inserting a new node
    int insertValue = 25;
    insert(&root, insertValue);
    printf("After insertion of %d: ", insertValue);
    inorderTraversal(root);
    printf("\n");

    // Searching for a node
    int target = 25;
    TreeNode* searchResult = search(root, target);
    if (searchResult != NULL) {
        printf("Node %d found in the BST.\n", target);
    }
    else {
        printf("Node %d not found in the BST.\n", target);
    }

    return 0;;
}
