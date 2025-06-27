#include <stdio.h>

int main() {
    long average = 0, input = 0;

    do {
        printf("Input a number: ");
        scanf("%ld", &input);
        if (input == 0) break;
        if (average != 0) {
            average += input;
            average /= 2;
        } else {
            average = input;
        }
        printf("\n");
    } while (input != 0);

    printf("The average is %ld\n", (long)average);
    return 0;
}
