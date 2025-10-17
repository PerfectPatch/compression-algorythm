#include <stdio.h>

int main(void){
    int arr[7] = {1,2,3,4,5,6,7};
    int size = sizeof(arr) / sizeof(*arr);
    int reverse_arr[size];
    for (int i = 0; i < size; i++){
        reverse_arr[i] = arr[size - i - 1];
        //printf("reverse_arr[%d] = arr[%d],\n",i ,size - i - 1);
        /*When you declare an array variable, it’s better to specify its size. 
        I had an error where I wrote reverse_arr[], and it couldn’t find the indexes properly, 
        which caused it to start printing values in reverse order after the 4th element — like 7 6 5 4 4 5 6 7.
        */
    }
    puts("");
    for (int x = 0; x < size; x++)
        printf("reverse_arr[%d] = %d,\n",x,reverse_arr[x]); 
    return 0;
}