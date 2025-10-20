#include <stdio.h>

int main(void){

    char arr[5] = {1,4,5,6,7};
    char sum = 0, size = sizeof arr / sizeof *arr;
    for (int i = 0; i < size; i++)
        sum += arr[i];

    printf("%d\n",sum);
    return 0;
}