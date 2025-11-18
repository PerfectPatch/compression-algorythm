#include <stdio.h>

int main(void){
    int a, b;
    printf("Write your two numbers\n");
    scanf("%d %d", &a, &b);
    b == 0 ? (printf("You tried devide by 0?")) : 
    ( a % b == 0 ? printf("%d devides by %d\n",a, b): 
    printf("%d don't devide by %d\n",a, b)); 
    return 0;
}