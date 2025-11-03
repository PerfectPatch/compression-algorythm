#include <stdio.h>
/*Here I’m trying to increase the complexity of usage. From now on, I’ll mainly be using pointers.
*/

int sum_value(int *p, int *q){return *p + *q;}

int dif_value(int *p, int *q){return *p - *q;}
 
float dev_value(int *p, int *q){return (float)*p / (float)*q;}

int mul_value(int *p, int *q){return (*p) * (*q);}

int main(void){
    int i[2];
    scanf("%d %d", &i[0], &i[1]);

    printf("%d + %d = %d\n",i[0],i[1], sum_value(&i[0], &i[1]));             
    printf("%d - %d = %d\n",i[0],i[1], dif_value(&i[0], &i[1]));
    printf("%d * %d = %d\n",i[0],i[1], mul_value(&i[0], &i[1]));
    printf("%d / %d = %.2f\n",i[0],i[1], dev_value(&i[0], &i[1]));
}