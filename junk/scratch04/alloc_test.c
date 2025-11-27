#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n = 5;
    int *arr = malloc(n * sizeof(int));

    free(arr);
    arr = NULL;

}