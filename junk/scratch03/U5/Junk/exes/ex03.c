#include <stdio.h>

int main(void){
    printf("%2s %8s\n", "n", "trianNum");
    for (int i = 0, j = 50; i < 10; i++, j -= 5){
        printf("%3d %7d\n", j, (j * (j + 1))/2);
    }
    return 0;
}