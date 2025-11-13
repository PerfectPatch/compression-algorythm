#include <stdio.h>

int main(void){
    int arr[] = {365, 12256, 996};
    int arr_1[] = {7, 23, 4};
    printf("%-10s %-3s\n", "i", "j");
    for (int i; i < 3; i++){
        printf("%-10d %-3d\n",(arr[i] + arr_1[i] - arr[i] % arr_1[i]), arr_1[i]);
    }
    return 0;
}