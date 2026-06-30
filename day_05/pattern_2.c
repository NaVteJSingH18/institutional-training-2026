#include <stdio.h>

int n = 5;

int main() {
    for (int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
                printf("*");
        }
    printf("\n");   
    }
    
    // for (int i = n; i >= 0; i--){
    //     for(int j = 0; j <= i; j++){
    //             printf("*");
    //     }
    // printf("\n");   
    // }

    for (int i = 0; i < n-1; i++){
        for(int j = n-i-2; j >= 0; j--){
                printf("*");
        }
    printf("\n");   
    }

    return 0;
}