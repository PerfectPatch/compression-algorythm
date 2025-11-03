#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int array[8] = {1,2,3,4,5,6,12,20};
    // (A,|)
    int size = sizeof array / sizeof *array;
    for (int j = 0; j < size; j++){
        for (int i = 0; i < size; i++){
            if (array[i] % *(array + j) == 0 && array[i] != array[size] && array[i] != *(array + j))
                printf("[%d<%d]",*(array + j), array[i]); 
            }
            printf("\n"); 
    }
    return 0;
}
