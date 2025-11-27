#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    char *part1 = malloc(1000);
    if (!part1){
        return 0;
    }
    printf("Write your message:\n");
    fgets(part1, 1000, stdin);

    int key = 8;

    for (int i = 0; i < strlen(part1); i++) {
        if (part1[i] >= 'A' && part1[i] <= 'Z') {
            part1[i] = 'A' + (part1[i] - 'A' + key) % 26;
        } else if (part1[i] >= 'a' && part1[i] <= 'z') {
            part1[i] = 'a' + (part1[i] - 'a' + key) % 26;
        }
    }

    printf("%s\n", part1);
    free(part1);
    return 0;
}
