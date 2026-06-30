#include<stdio.h>
#include<string.h>
int main(){
    char str1[10]="hello";
    char str2[10]="heelo";

    printf("%s",strcat(str1,str2));// concatinate
    
    return 0;
}