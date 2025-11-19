#include <stdio.h>

int main(void) {
    int number = 121;
    int highestPlace = 1;
    int reversed = 0;

    for (int temp = number; temp >= 10; temp /= 10) {
        highestPlace *= 10;
    }

    for (int temp = number, place = highestPlace; temp != 0; place /= 10) {
        int digit = temp % 10;      
        temp /= 10;                 
        reversed += digit * place;
    }

    if (reversed == number)
        printf("It's polyndrome\n");
    return 0;
}
