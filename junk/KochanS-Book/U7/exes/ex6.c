#include <stdio.h>

int main(void)
{
    int value1=1, value2=1, new_value;
    printf("%i %i ", value1, value2);
    for (int i = 0; i < 10; i++){
        new_value = value1 + value2;
        value1 = value2;
        value2 = new_value;
        printf("%i ", value2);
    }
    printf("\n");
    return 0;
}