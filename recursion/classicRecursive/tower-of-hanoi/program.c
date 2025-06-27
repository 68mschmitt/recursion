#include <stdio.h>

void hanoi(int n, char from, char to, char aux) {
    if (n == 0) return;
    hanoi(n-1, from, aux, to);
    printf("Move disk %d from rod %c to rod %c\n", n, from, to);
    hanoi(n-1, aux, to, from);
}

int main() {
    hanoi(4, 'a', 'c', 'b');
    return 1;
}
