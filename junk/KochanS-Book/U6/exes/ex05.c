#include <stdio.h>

int main(void) {
    int number, reversed = 0, digit;

    printf("Enter your number:\n");
    scanf("%d", &number);
 
    int temp = number;
    while (temp != 0) {
        // printf("%d * 10 + %d % 10\n", reversed, temp);
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }

    while (reversed != 0) {
        digit = reversed % 10;

        switch (digit) {
            case 0: printf("Zero "); break;
            case 1: printf("One "); break;
            case 2: printf("Two "); break;
            case 3: printf("Three "); break;
            case 4: printf("Four "); break;
            case 5: printf("Five "); break;
            case 6: printf("Six "); break;
            case 7: printf("Seven "); break;
            case 8: printf("Eight "); break;
            case 9: printf("Nine "); break;
        }

        reversed /= 10;
    }

    printf("\n");
    return 0;
}
