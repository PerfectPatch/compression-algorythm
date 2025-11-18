#include <stdio.h>


int main(void){
    float value1, value2 = 0;
    char operator = 0;

    while (1) 
    {
        scanf("%f %c", &value1, &operator);

        switch (operator)
        {
            case 'S':
                value2 = value1;
                printf("You saved %.5f\n", value2);
                break;

            case '+':
                value2 += value1;
                printf("=%.5f\n", value2);
                break;

            case '-':
                value2 -= value1;
                printf("=%.5f\n", value2);
                break;

            case '*':
                value2 *= value1;
                printf("=%.5f\n", value2);
                break;

            case '/':
                if (value1 != 0){
                    value2 /= value1;
                    printf("=%.5f\n", value2);
                } else
                    printf("You can't divide by 0");
                break;

            case 'E':
                return 0;

            default:
                printf("Unknown operator\n");
                break;
        }
    }
    return 0;
}