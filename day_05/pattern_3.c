// Online C compiler to run C program online
#include <stdio.h>

int n = 5;

int main() {
    for (int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
                printf("*");
        }
        for(int j = 1; j <= 2*(n-i); j++){
                printf(" ");
        }
        for(int j = 1; j <= i; j++){
                printf("*");
        }
    printf("\n");   
    }
    for (int i = n; i > 0; i--){
        for(int j = 1; j <= i; j++){
                printf("*");
        }
    printf("\n");   
    }

    return 0;
}