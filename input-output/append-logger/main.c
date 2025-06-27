#include <stdio.h>

int main() {
    FILE *f = fopen("output.txt", "a");
    char text[100];

    printf("Enter some text: ");
    fgets(text, sizeof(text), stdin);
    fprintf(f, "%s", text);
    fclose(f);

    printf("Text appended to output.txt\n");
    return 0;
}
