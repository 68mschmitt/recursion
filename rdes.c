#include <stdio.h>

int factorial(int n) {
    printf("Call with %d\n", n);
    if (n == 1) {
        return 1;
    } else {
        int result = factorial(n-1);
        int nextInput = n * result;
        printf("Next stack frame input: %d * %d = %d\n", n, result, nextInput);
        return nextInput;
    }
}

int main() {
    int num = 5;
    printf("Result: %d\n", factorial(num));
    return 0;
}
