#include <stdio.h>
#include <stdbool.h>

//snippet 7.1
void arrays(void);
//snippet 7.2
void counter_responses(void);
//snippet 7.3
void Fibo(void);
//snippet 7.4
void gen_prime(void);

int main(void)
{
    // arrays();
    // counter_responses();
    // Fibo();
    gen_prime();
    return 0;
}

void arrays(void){
    int value[10];
    int index;
    value[0] = 197;
    value[2] = -100;
    value[5] = 350;
    value[3] = value[0] + value[5];
    value[9] = value[5] / 10;
    --value[2];

    for (index = 0; index < 10; ++index )
        printf("values[%i] = %i\n", index, value[index]);
}

void counter_responses(void){
    int ratingCounters[11], i , response;
    // wait for 11 nums

    for ( i = 1; i <= 10; ++i) //<- make every arr[i] = 0 in "ratingCounters" 
        ratingCounters[i] = 0; 


    printf("Enter your responses\n");
    for ( i = 1; i <= 20; i++) {
        scanf ("%i", &response); // make 20 scanf() calls;
        if (response < 1 || response > 10)
            printf("Bad response: %i\n", response);
        else 
            ++ratingCounters[response]; 
            // it use response like "index" for ratingCounter;
            // mean if i get 1 to algo
            // it's take on place ratingCointer[1] += 1;
            // ---  
    }
    printf("\n\nRating Numbr of Responses\n");
    printf("------ -------------------\n");
    for ( i = 1; i <= 10; i++ )
        printf("%4i%14i\n", i , ratingCounters[i]);    
}

void Fibo(void){
    int Fibonacci[15], i;
    Fibonacci[0] = 0;
    Fibonacci[1] = 1;

    for (i = 2; i < 15; ++i)
        Fibonacci[i] = Fibonacci[i - 1] + Fibonacci[i - 2];
    for (i = 1; i < 15; ++i)
        printf("%i\n", Fibonacci[i]); 
}

void gen_prime(void){ //errors
    int p, i, primes[50], primeIndex = 2;
    bool isPrime;

    primes[0] = 2;
    primes[1] = 3;

    for (p = 5; p <= 50; p += 2) {
        isPrime = true;
        for (i = 1; isPrime && p / primes[i] >= primes[i] >= primes[i]; i++){
            if (p % primes[i] == 0)
                isPrime = false;
            if (isPrime == true)
                primes[primeIndex] = p;
            ++primeIndex;
        }
    }
    for (i = 0; i < primeIndex; ++i)
    printf("%i ", primes[i]);
    printf("\n");
}