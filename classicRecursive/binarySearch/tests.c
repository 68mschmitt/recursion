#include <stdio.h>
#include "binarySearch.h"

void test_binary_search(int* arr, int size, int target, int expected) {
    int result = binary_search(arr, 0, size - 1, target);
    if (result == expected)
        printf("PASS: target %d found at index %d\n", target, result);
    else
        printf("FAIL: target %d, expected %d, got %d\n", target, expected, result);
}

void run_tests() {
    int arr1[] = {1, 3, 5, 7, 9, 11, 13, 15};
    int arr2[] = {2, 4, 6, 8, 10};
    int arr3[] = {42};
    int arr4[] = {};
    
    // Basic cases
    test_binary_search(arr1, 8, 1, 0);      // first element
    test_binary_search(arr1, 8, 15, 7);     // last element
    test_binary_search(arr1, 8, 7, 3);      // middle element

    // Not found cases
    test_binary_search(arr1, 8, 8, -1);     // not in array
    test_binary_search(arr1, 8, 0, -1);     // below min
    test_binary_search(arr1, 8, 20, -1);    // above max

    // Even-sized array
    test_binary_search(arr2, 5, 4, 1);      // present
    test_binary_search(arr2, 5, 5, -1);     // not present

    // Single-element array
    test_binary_search(arr3, 1, 42, 0);     // present
    test_binary_search(arr3, 1, 99, -1);    // not present

    // Empty array
    test_binary_search(arr4, 0, 42, -1);
}
