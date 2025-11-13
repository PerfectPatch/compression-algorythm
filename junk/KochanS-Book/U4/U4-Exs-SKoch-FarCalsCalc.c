
/*You cant use name cahr*/

#include <stdio.h>

float cal_cels(int faring){
    return (faring - 32) / 1.8;
}

int main(void){
    int Faring = 27;
    printf("%d F = %.2g C\n", Faring ,cal_cels(27));
}