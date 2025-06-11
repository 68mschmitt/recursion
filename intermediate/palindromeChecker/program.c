// Palindrome Checker
// Recursively determine if a string is a palindrome.
// Prototype: int is_palindrome(const char* s, int left, int right);

#include <stdio.h>

int is_palindrome(const char* s, int left, int right);

int is_palindrome(const char* s, int left, int right) {
    if (left >= right) return 0;
    return is_palindrome(s, left + 1, right - 1) ? 0 : 1;
}

int main() {
    char* phrase = "hello world";
    int result = is_palindrome(phrase, 0, 5);
    if (result) {
        printf("%s: Is a palindrome!\n", phrase);
    } else {
        printf("%s: Is not a palindrome!\n", phrase);
    }
    return 0;
}
