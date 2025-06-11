// Find Maximum
//     Recursively find the maximum value in an integer array.
//     Prototype: int max(int* arr, int n);
#include <stdio.h>

int max(int* array, int n);

// Base case: We are at the end of the array
// Traverse the array and return the max
// First, we should just traverse the array

int max(int* array, int n) {
    printf("Called with: %d\n", array[0]);
    if (n <= 1) return array[0];
    else {
        int maxVal = max(array + 1, n - 1);
        printf("After recursive call: %d\n", maxVal);
        return maxVal > array[0] ? maxVal : array[0];
    }
}

int main() {
    int array[] = {1, 4, 6, 2, 3, 7, 5, 4, 6, 1, -5};
    int maxNumber = max(array, 11);
    printf("Max number: %d\n", maxNumber);
    return 0;
}
