#include <stdio.h>
#include <string.h>
int main(void){
    char str[]= "HAHAHAHAHAHA ";
    char str2[50];
    int a = 10;
    int *p = &a;
    char strk[40];

    scanf("%10s", strk);

    printf("%s\n", strk);






    printf("%d\n", *p);

    strcpy(str2, str);
    printf("%d\n", strlen(str));
    printf("%s\n", str2);
    strcat(str2, str);
    printf("%s\n",str2);
    return 0;
}