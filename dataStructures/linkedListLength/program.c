// Linked List Length
// Recursively count the number of nodes in a singly linked list.
// Prototype: int list_length(Node* head);
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int value;
    struct Node* next;
};

struct Node* create_node(int value) {
    struct Node* node;
    node = malloc(sizeof(struct Node));
    node->value = value;
    return node;
}

struct Node* push_node(struct Node* head, struct Node* node) {
    node->next = head;
    printf("Push: %d\n", node->value);
    return node;
}

void print_link_list(struct Node* head) {
    printf("Pop: %d\n", head->value);
    if (!head->next) return;
    print_link_list(head->next);
}

int list_length(struct Node* head);

int list_length(struct Node* head) {
    if (!head->next) return 1;
    return 1 + list_length(head->next);
}

struct Node* generate_linked_list(int length) {
    if (length <= 0) return 0;
    struct Node* head = create_node(1);

    printf("%d\n", head->value);

    unsigned i;
    for (i = 2; i <= length; i++) {
        head = push_node(head, create_node(i));
    }

    return head;
}

int main() {
    struct Node* head = generate_linked_list(20);
    int result = list_length(head);
    printf("Length of linked list: %d\n", result);
    return 0;
}
