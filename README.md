Beginner

    Sum of Array

        Write a function to compute the sum of all elements in an integer array, recursively.

        Prototype: int sum(int* arr, int n);

    Count Digits

        Recursively count the number of digits in a non-negative integer.

        Example: count_digits(1048) returns 4.

    Reverse Print

        Recursively print the characters of a string in reverse order.

        Prototype: void reverse_print(const char* s);

Intermediate

    Find Maximum

        Recursively find the maximum value in an integer array.

        Prototype: int max(int* arr, int n);

    Palindrome Checker

        Recursively determine if a string is a palindrome.

        Prototype: int is_palindrome(const char* s, int left, int right);

    Power Function

        Compute a^b recursively (handle both positive and zero exponents).

        Prototype: int power(int a, int b);

Data Structure Traversal

    Linked List Length

        Recursively count the number of nodes in a singly linked list.

        Prototype: int list_length(Node* head);

    Tree Depth

        Recursively compute the maximum depth (height) of a binary tree.

        Prototype: int tree_depth(TreeNode* root);

    Sum All Tree Nodes

        Recursively sum all the values in a binary tree.

Classic Recursive Algorithms

    Binary Search (Recursive)

        Write a recursive version of binary search for a sorted array.

        Prototype: int binary_search(int* arr, int left, int right, int target);

    Tower of Hanoi

        Print the moves required to solve Tower of Hanoi for n disks.

        Prototype: void hanoi(int n, char from, char to, char aux);

    Generate Permutations

        Recursively print all permutations of a given string.

Challenge/Creative

    Flatten Nested Arrays

        Given a nested structure (arrays within arrays), recursively print all integers.

        (For C: define a struct with possible nested “array” members.)

    Print All Paths in a Maze

        Recursively print all paths from the top-left to the bottom-right of a 2D array (move only right or down).

Extra (For Fun):

    Recursive File/Directory Listing (Try with POSIX DIR*)

    Evaluate a Simple Arithmetic Expression (e.g., "1+(2*3)"—recursive descent parsing)
