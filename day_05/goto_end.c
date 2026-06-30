#include <stdio.h>

int main(){
    int i = 1;

    for (int i = 1; i <= 8; i++){
        for (int j = 1; j <= 8; j++){
            for (int k = 1; k <= 8; k++){
                goto end;
            }
        }
    }

    end:
        printf("Escaped!");

    return 0;
}