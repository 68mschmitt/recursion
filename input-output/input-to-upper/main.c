#include <ctype.h>
#include <stdio.h>

int main() {
    char text[100];

    printf("Enter something to get uppered: ");
    fgets(text, sizeof(text), stdin);
    for(int i = 0; text[i]; i++)
        text[i] &= ~0x20;
    printf("%s\n", text);

    return 0;
}
