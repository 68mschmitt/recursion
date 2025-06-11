#include <stdio.h>

void print_forward(int* arr, int n) {
    if (n == 0) return;
    printf("%d ", arr[0]);     // Work before recursion: forward order
    print_forward(arr + 1, n - 1);
}

void print_reverse(int* arr, int n) {
    if (n == 0) return;
    print_reverse(arr + 1, n - 1);
    printf("%d ", arr[0]);     // Work after recursion: reverse order
}

int main() {
    int array[] = {1, 2, 3};
    int n = 3;

    printf("Print forward - Build the stack\n");
    print_forward(array, n);
    printf("\n");
    printf("Print backwards - Unwind the stack\n");
    print_reverse(array, n);
    printf("\n");
}
