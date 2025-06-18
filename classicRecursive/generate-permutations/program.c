// Generate Permutations
// Recursively print all permutations of a given string.

#include <stdio.h>

void swap(char *a, char *b) {
    char t = *a;
    *a = *b;
    *b = t;
}

void permutations(char *str, int l, int r) {
    if (l == (r - 1)) printf("%s ", str);
    else {
        for (int i = l; i < r; i++) {
            swap(str+l, str+i);
            permutations(str, l + 1, r);
            swap(str+l, str+i);
        }
    }
}

int main() {
    char str[] = "ABC";
    permutations(str, 0, 3);
    printf("\n");
    return 0;
}
