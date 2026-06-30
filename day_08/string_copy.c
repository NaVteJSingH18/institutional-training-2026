#include<stdio.h>
#include<string.h>
int main(){
    char str1[10]="hello";
    char str2[10]="heelo";

    printf("%s ",strcpy(str2,str1));// copy 

    return 0;
}