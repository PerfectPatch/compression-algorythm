#include <stdio.h>

void counter_responses(void){
    int ratingCounters[11], i , response;
    // wait for 11 nums

    for ( i = 1; i <= 10; ++i)
        ratingCounters[i] = 0; 


    printf("Enter your responses\n");
    while(1){
        scanf ("%i", &response);
        if (response == 999)
            break;
        else if (response < 1 || response > 10)
            printf("Bad response: %i\n", response);
        else 
            ++ratingCounters[response]; 
    }

    printf("\n\nRating Numbr of Responses\n");
    printf("------ -------------------\n");
    for ( i = 1; i <= 10; i++ )
        printf("%4i%14i\n", i , ratingCounters[i]);
}

int main(void){
    counter_responses();
    return 0;
}