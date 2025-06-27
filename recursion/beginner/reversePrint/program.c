#include <stdio.h>

void reverse_print(const char* s);

void reverse_print(const char* s) {
    if (*s == 0) return;
    else {
        reverse_print(s + 1);
        printf("%c", *s);
    }
}

// Base case: If the char is pointing to an empty value, then we hit the last letter
// We want to get to the last char then work our way up and print a char along the way

int main() {
    reverse_print("\nHello World!\n");
    return 0;
}
