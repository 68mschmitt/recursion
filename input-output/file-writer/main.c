#include <stdio.h>

int main() {
    FILE* f = fopen("output.txt",  "w");
    char text[100];

    printf("Type text to save: ");
    fgets(text, sizeof(text), stdin);
    fprintf(f, "%s", text);
    fclose(f);

    printf("Saved to output.txt\n");
    return 0;
}
