#include <stdio.h>

int main(void){
    int numbers[10], value, sum, count = 0;
    float answer;
    //part-1: Make array 
    for (int i = 0; i < 10; i++){
        scanf("%i", &value);
        numbers[i] = value; 
    }
    //part-2:
    printf("--------------------\n");
    for (int i = 0; i < 10; i++){
        printf("%i ", numbers[i]);
        sum += numbers[i];
        count++;
    }
    printf("\n");
    answer = (float)sum/count;
    printf("Average: %.2f\n", answer);
    return 0;
}