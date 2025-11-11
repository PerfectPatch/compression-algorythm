#include <stdio.h>

void polyn(float *x){
    (*x) = 3*((*x)*(*x)*(*x))- 5*((*x)*(*x)) + 6;
}

int main(void){
    float x = 2.55;
    polyn(&x);
    printf("%g\n", x);
    return 0;
}