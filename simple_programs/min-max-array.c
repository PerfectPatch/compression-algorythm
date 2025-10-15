#include <stdio.h>
unsigned char max(unsigned char arr[], unsigned char size) {
    unsigned char max = *arr;
    for (unsigned char i = 1; i < size; i++)
        max < arr[i] ? (max = arr[i]) : 0;
    return max; 
}

unsigned char min(unsigned char arr[], unsigned char size) {
    unsigned char min = *arr;
    for (unsigned char i = 1; i < size; i++)
        min > arr[i] ? (min = arr[i]) : 0;
    return min; 
}

int main(void){
    char arr[] = {1,2,3,4,5,12,3,4,5,6};
    char size = sizeof arr / sizeof *arr;
    // sizeof -> size of all el. in array (5 bytes) 
    // sizeof *arr -> size of first el.
        printf("%u\n", max(arr,size));
        printf("%u\n", min(arr,size));
    return 0;
}
