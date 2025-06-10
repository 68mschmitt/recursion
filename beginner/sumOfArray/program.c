#include <stdio.h>

int sum(int* array, int n);

int sum(int* array, int n) {
    if (n <= 1) return array[0];
    // If I increment the array pointer as the input, then I don't have to do as much copying down the stack
    // Then I can just call array[0] each time I want to get the focused array value
    return array[0] + sum(array + 1, n-1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 55, 44, 66};
    int sumTotal = sum(arr, 10);

    printf("Sum Total: %d\n", sumTotal);

    return 0;
}
