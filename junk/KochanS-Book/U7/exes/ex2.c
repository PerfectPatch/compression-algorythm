#include <stdio.h>

void arrays(void){
    int value[10];
    int index;
    
    for (index = 0; index < 10; ++index)
        value[index] = 0; 

    for (index = 0; index < 10; ++index )
        printf("values[%i] = %i\n", index, value[index]);
}

int main(void){
    arrays();
    return 0;
}