#include <stdio.h>

void square(int* num){
    int q = *num; *num = 0;
    for (int n = 1; n <= q; n++){*num += (2 * n) - 1;}
}

int main(void){
    int a = 5; square(&a);
    printf("%d\n", a);
    return 0;
}