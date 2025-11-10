#include <stdio.h>

int main(void){
    int x = 5;

    switch(x)
    {
        case 1: printf("x is 1\n");
            break;
        case 2: printf("x is 2\n");
            break;
        case 3: printf("x is 3\n");
            break;
        default: printf("x is a number other than 1, 2, ans 3\n");
            break;
    }
}

// 1. You are not allowed to add dublicate cases.
// 2. Arg only in int
// 3. Float isn't allowed as a constant value in case label.
/* 4. Variable expressions aren't allowed in case lables. 
    Although macros are allowed. Macros is #define ..*/ 
