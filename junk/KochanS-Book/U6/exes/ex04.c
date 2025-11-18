#include <stdio.h>

int main(void){
    int number, right_digit, temp;

    printf ("Enter your number.\n");
    scanf ("%i", &number);
    if (number < 0)
        temp = 1;
        number = -number;
    while (number != 0){
        right_digit = number % 10;
        printf ("%i", right_digit);
        number = number / 10;
    }
    if (temp == 1){
        printf("-");
    }
    printf ("\n");
    return 0;
}