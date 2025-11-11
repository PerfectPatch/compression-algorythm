#include <stdio.h>

int main(void){
    for (int i = 0, j = 10; i <= 10; i++, j--){
        printf("%-3d %3d\n",i, j);
    }
    return 0;
}