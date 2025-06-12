// Palindrome Checker
// Recursively determine if a string is a palindrome.
// Prototype: int is_palindrome(const char* s, int left, int right);

#include <stdio.h>
#include <string.h>

int is_palindrome(const char* s, int left, int right);

int is_a_let(char c) {
    return (c > 64 && c < 91) || (c > 96 && c < 123);
}

int is_palindrome(const char* s, int left, int right) {
    if (left >= right) return 1;
    while(!is_a_let(s[left])) left++;
    while(!is_a_let(s[right])) right--;
    if ((s[left] | 0x20) != (s[right] | 0x20)) return 0;
    return is_palindrome(s, left + 1, right - 1);
}

void run_palindrome(char* s) {
    int strLength = strlen(s);
    int result = is_palindrome(s, 0, strLength - 1);
    if (result) {
        printf("%s: Is a palindrome!\n", s);
    } else {
        printf("%s: Is not a palindrome!\n", s);
    }
}

void to_lower_test() {
    char cA = 'a';
    char cB = cA | 0x20;

    printf("Char A: %c\nChar B: %c\n", cA, cB);
}

void check_for_char() {
    char *str = "Hello, World!";

    unsigned i;
    for (i = 0; i < strlen(str); i++) {
        printf("c: %c - u: %u - is_char: %d\n", str[i], str[i], is_a_let(str[i]));
    }
    printf("\n");
}

int main() {
    char *input1 = "Was it a cat I saw?";
    char *input2 = "Hello there!";
    char *input3 = "";
    run_palindrome(input1);
    run_palindrome(input2);
    run_palindrome(input3);
    // to_lower_test();
    // check_for_char();
    return 0;
}
