#include <stdio.h>

int main() {
    FILE *f = fopen("input.txt", "r");
    char buffer[100];

    printf("Contents of input.txt:\n");
    while(fgets(buffer, sizeof(buffer), f)) {
        printf("%s", buffer);
    }

    fclose(f);
    return 0;
}
