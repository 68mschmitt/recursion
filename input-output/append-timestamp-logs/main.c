#include <stdio.h>
#include <time.h>

int main() {
    FILE *f = fopen("output.txt", "a");
    time_t current_time;
    current_time = time(NULL);
    fprintf(f, "TimeStamp: %ld\n", (long)current_time);
    fclose(f);

    printf("Appended timestamp\n");
    return 0;
}
