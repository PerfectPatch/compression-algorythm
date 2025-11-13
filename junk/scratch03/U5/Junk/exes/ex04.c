#include <stdio.h>

int main(void){
    int j, n = 1;    
    for(int j = 0; j < 10; j++){
        for(int i = 1; i <= j; i++){
            n *= i;
        }
        printf("%d! = %d\n", j, n);
        n = 1;
    }

    return 0;
}