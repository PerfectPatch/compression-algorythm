#include <stdio.h>

int main(){

    //types of using iteration in arrays
    int array[] = {1,2,3,4,5};

    printf("%d\n", array[1]);
    
    // or
    printf("%d\n", *(array + 1));
    // or
    int *p = array;
    printf("%d\n",*(p+1));


    return 0;
}
