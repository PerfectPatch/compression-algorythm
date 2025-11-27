#include <stdio.h>

void shift(const char *src, char *dst, int offset);
int compare(const char *str1, const char *str2);
char rotate(char original, int offset);

int main(void){

    char *vstup_1 = "xUbbemehbT";
    char *vstup_2 = "XYlloworld";
    char out_1[20];
    for (int i = 0; i < 20; i++){
        shift(vstup_1, out_1, i);
        if (compare(out_1, vstup_2) > 4){
            break;
        }
    }

    if (out_1[0] >= 'a' && out_1[0] <= 'z'){
        out_1[0] = rotate(out_1[0], -32);
    }
    for (int i = 1; i < 10; i++){
        if (out_1[i] >= 'A' && out_1[i] <= 'Z')
            out_1[i] = rotate(out_1[i], 32);
        else
            continue;
    }
    printf("%s", out_1);
    return 0;
}

void shift(const char *src, char *dst, int offset){
    int i = 0;
    char ch = src[i]; 

    while (ch != '\0'){
        if (ch >= 'A' && ch <= 'Z') {
            dst[i] = 'A' + (ch - 'A' + offset) % 26;
        } else if (ch >= 'a' && ch <= 'z')
            dst[i] = 'a' + (ch - 'a' + offset) % 26;
        ch = src[++i];
    }
    dst[i] = '\0';
}

int compare(const char *str1, const char *str2){
    int i = 0;
    char ch = str1[i];
    int sum = 0;
    while (ch != '\0'){
        if (ch == str2[i]){
            sum++;
        }
        i++;
        ch = str1[i];
    }
    return sum;
}

char rotate(char original, int offset) {
    return original + offset;
}