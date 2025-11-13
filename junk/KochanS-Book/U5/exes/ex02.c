#include <stdio.h>

int main(void){
    printf("%3s %4s\n", "n", "n^2");
    for (int n = 0; n <= 10; n++){
        printf("%3d %3d\n",n, n*n);
    }
    return 0;
}