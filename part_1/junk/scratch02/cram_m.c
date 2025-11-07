#include <stdio.h>
#include <math.h>


// hard lvl
int main(void){
    int A[2][2] = {{2,7},{5,3}};
    // int B[2][2];


    for (int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            if (!(i == 1 && j == 1)){
                A[i][j] = 0;
            }
        }
    }

    int sum = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            sum += A[i][j];
            if (i == 1 && j == 1)
                sum *= ((i + j) % 2 == 0 ? 1 : -1);
        }
    }


    printf("%d", sum);

    /*------------- Junk
    for (int i = 0; i < 2; i++){
        /*printf("%d ", **(A + i)); //-> 2 5
        **(A + i) = 0;
    }
    for (int i = 0; i < 2; i++){
        printf("%d ", **(A + i));
    }
    -----------------*/

    printf("\n");

    return 0;
}