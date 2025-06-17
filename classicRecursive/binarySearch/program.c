// - Binary Search (Recursive)
//  - Write a recursive version of binary search for a sorted array.
//  - Prototype: int binary_search(int* arr, int left, int right, int target);

#include "binarySearch.h"
#include "tests.c"

int binary_search(int* arr, int left, int right, int target) {
    if (right < left) return -1;
    int index = left + (right - left) / 2;
    if (arr[index] == target) return index;
    return arr[index] < target ? binary_search(arr, index + 1, right, target) : binary_search(arr, left, index - 1, target);
}

int main() {
    run_tests();
    return 1;
}
