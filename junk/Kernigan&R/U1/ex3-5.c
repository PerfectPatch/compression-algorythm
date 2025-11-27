#include <stdio.h>

int main(void){
    float fahr, celsius;
    int lower, upper, step;

    lower = 0; 
    upper = 100;
    step = 20;

    fahr = upper;
    printf("Celsius calculator\n");
    printf("-------------------\n");
    while (fahr >= lower){
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0fF\t%6.1fC\n", fahr, celsius);
        fahr = fahr - step;
    }
}