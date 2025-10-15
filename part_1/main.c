

// char max(char array[], unsigned char size){
//     unsigned char *max = &array;
//     for (unsigned char i = 1; i < size; i++) 
//         array[i] > *max ? *max = array[i] : 0;
//     return *max;
// }

// char min(char array[], unsigned char size){
//     unsigned char *min = &array;
//     for (unsigned char i = 1; i < size; i++)
//         array[i] < *min ? *min = array[i] : 0;
//     return *min;
// }

#include <stdio.h> 
unsigned char max(char a[], unsigned char s){char m=a[0];for(char i=1;i<s;i++)a[i]>m?m=a[i]:0;return m;} unsigned char min(char a[], unsigned char s){char m=a[0];for(char i=1;i<s;i++)a[i]>m?m=a[i]:0;return m;} int main(void){unsigned char arr[]={3,7,4,5,9,7,8,2};unsigned char size = sizeof(arr) / sizeof(arr[0]);printf("%d\n",max(arr, size));printf("%d\n",min(arr, size));}