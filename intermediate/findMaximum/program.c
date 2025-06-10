// Find Maximum
//     Recursively find the maximum value in an integer array.
//     Prototype: int max(int* arr, int n);
#include <stdio.h>

int max(int* arr, int n);

// Base case: We are at the end of the array
// Traverse the array and return the max
// First, we should just traverse the array

int max(int* arr, int n) {
    printf("num: %d\n", arr[0]);
    if (n <= 1) return arr[0];
    else {
        if (arr[0] > max(arr + 1, n - 1)) return arr[0];
        else return max(arr + 1, n - 1);
    }
}

int main() {
    int array[] = {1, 4, 6, 2, 3, 7};
    int maxNumber = max(array, 3);
    printf("Max number: %d\n", maxNumber);
    return 0;
}
