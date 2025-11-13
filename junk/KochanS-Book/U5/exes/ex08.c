#include <stdio.h>

int main(void){
    int n, number, trieangulatNumber, counter;
    
    while (1){
        printf("What triangular number do you want?");
        scanf("%i", &number);
        if (!number){
            break;
        }
        trieangulatNumber = 0;
        for ( n = 1; n <= number; ++n)
            trieangulatNumber += n;
        printf("Triangular number %i is %i\n\n",number, trieangulatNumber);
    }
    return 0;
}