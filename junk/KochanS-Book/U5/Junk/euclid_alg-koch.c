#include <stdio.h>

int main(void){
    int u = 150, v = 35, temp;

    while (v != 0){
        temp = u % v; // here it takes in memory value div
        u = v;  // Before: u = 150, After: u = 35
        v = temp; // And now: v = 10
    } // clean algo
    printf("%d\n", u);
    return 0;
}

/*
The same math algo - So clean
1. The same as in algo we have to make 
    150 % 35 = 10
    35 % 10 = 5
    10 % 5 = [0] Aha! 5 is 
Answ: 5
*/