#include <stdio.h>
//mhm... not actually what i need, but ok. 
int main(void)
{   
    int prime[200], pos = 0;
    prime[0] = 2;

    for (int i = 3; pos < 200; i++){
        int is_prime = 1;
        for (int j = 0; j <= pos; j++){
            if (i % prime[j] == 0){
                is_prime = 0;
                break; 
            }
        }
        if (is_prime){
            pos++;
            prime[pos] = i;
        }
    } 


    for (int i = 0; i < 200; i++){
        printf("%i ", prime[i]);
    }
    printf("\n");

    return 0;
}

