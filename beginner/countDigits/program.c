#include <stdio.h>

int count_digits(int num);
int count_digits_handle_negatives(int num);

int count_digits_handle_negatives(int num) {
    if (num < 0) num = -num;
    if (num == 0) return 1;
    return 1 + count_digits_handle_negatives(num / 10);
}

int count_digits(int num) {
    printf("Input num: %d\n", num);
    if (num <= 0) return 0;
    return 1 + count_digits(num / 10);
}

int main() {
    int count = count_digits_handle_negatives(-123456789);
    printf("Digits in number: %d\n", count);
    return 0;
}
