#include <stdio.h>

float faring(int F){
    return ((float)((F - 32)/ 1.8));
}

void debil(){
    char c, d;
    c = 'd';
    d = c;
    printf("d = %c\n", d); 
}
float polunom(float *x){
    return 3*(*x**x) - 5*(*x**x) + 6;
}

float just(){
    return (3.31 * 10-8 * 2.01 * 10-7) / (7.16 * 10-6 + 2.01 * 10-8);
}

int govno(int i, int j){
    return i + j - i % j;
}

void prosto(int x){
    int k = 0;
    for (int i = 1; i <= x; i++)
        x % i == 0 ? k++ : 0;
    k > 2 ? puts("Ne prostoe"): puts("Prostoe");
}

int main(void){
    // printf("%g\n", faring(27));
    // debil();
    // float x = 2.55;
    // printf("%g\n",polunom(&x));
    // printf("%g\n",just());

    // printf("%d\n",govno(365,7));
    // printf("%d\n",govno(12258,23));
    // printf("%d\n",govno(996,4));

    prosto(241);
    return 0;
}