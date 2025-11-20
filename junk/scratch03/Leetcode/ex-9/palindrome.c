#include <stdio.h>


//my code
int main(void) {
    int number = 121;
    int highestPlace = 1;
    int reversed = 0;
    /*
    [3]I use two for loops to perform the same operation. 
    The first one simply calculates the number of valid place values — for example, 
    if the number is 112390, the first loop will produce 100000. 
    But the problem is that I have to use an additional long long, 
    while the author below only needs a single variable."
    */
    for (int temp = number; temp >= 10; temp /= 10) {
        highestPlace *= 10;
    }

    for (int temp = number, place = highestPlace; temp != 0; place /= 10) {
        int digit = temp % 10;      
        temp /= 10;                 
        reversed += digit * place;
    }

    if (reversed == number)
        printf("It's palindrome\n");
    return 0;
}

//external code: 
// https://leetcode.com/problems/palindrome-number/solutions/3283534/accepted-java-c-code-beats-98-by-thilakn-5rjw
// Autor: https://leetcode.com/u/thilaknv/
/*
bool isPalindrome(int x){

[1] Here it excludes all unnecessary cases that automatically 
fall under non-palindromes.]

    if(x<0 || x!=0 && x%10 ==0 ) return false;
    int check=0;

[2] Here the algorithm works as follows: it simply sets the 
indentation values, and each last digit increases the place value — for example, 
1 → 10, 12 → 120. Then the empty place is filled by 
adding the last digits using x % 10. The algorithm is simple and 
straightforward, without anything unnecessary.]

    while(x>check){
        check = check*10 + x%10;
        x/=10;
    }
    return (x==check || x==check/10);


[conclusion] my mistake is that I keep trying to 
invent my own algorithm. On one hand, you can philosophize 
about it and say that creating your own methods is smart, 
but on the other hand — how can I learn to write good algorithms
if I don’t know the basic ones? Especially considering that these 
algorithms were written by people who definitely weren’t fools.]
}
*/