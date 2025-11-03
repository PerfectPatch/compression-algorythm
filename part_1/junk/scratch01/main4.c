#include <stdio.h>
void heavy(int* point) { //*point = &a
    *point = (*point * 1231 - 1) % 100;
    *point = 1111;
}

int main(void){
    int a = 5;
    heavy(&a);
    printf("%d\n", a);
    return 0;
}