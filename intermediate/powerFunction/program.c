// Power Function
// Compute a^b recursively (handle both positive and zero exponents).
// Prototype: int power(int a, int b);
#include <stdio.h>

int power(int a, int b);

int power(int a, int b) {
    if (b == 0) return 1;
    else if (b == 1) return a;
    return a * power(a, b - 1);
}

int switch_power(int a, int b) {
    switch (b) {
        case 0:
            return 1;
            break;
        case 1:
            return a;
            break;
        default:
            return a * power(a, b - 1);
            break;
    }
}

void run_power() {
    int a, b;
    a = 2;
    b = 20;
    int result = switch_power(a, b);
    printf("%d^%d = %d\n", a, b, result);
}

int main() {
    run_power();
    return 1;
}
