// Online C compiler to run C program online
#include <stdio.h>

int n = 5;

int main() {
    for (int i = 1; i <= n; i++){
        for(int j = 1; j <= 2*n ; j++){
            if(i == n || j == n - i + 1 || j == n + i -1 )
                printf("  *  ");
            else
                printf("      ");
        }
    printf("\n");   
    }

    return 0;
}