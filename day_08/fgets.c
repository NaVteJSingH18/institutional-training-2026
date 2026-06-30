#include <stdio.h>
#include <string.h>

int main(){
    char str[10];

    fgets(str, sizeof(str), stdin);
    printf("%s", str);

    // string function: <string.h> - only declaration
    // strlen() - length of string

    printf("%d", strlen(str));
    return 0;
}