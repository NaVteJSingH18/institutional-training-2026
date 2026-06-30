#include <stdio.h>

int main(){
    int first = 0;
    int second = 1;

    printf("%d %d ", first, second);

    for (int i = 1; i <= 8; i++){
        int third = first + second;
        printf("%d ", third);

        first = second;
        second = third;
    }

    return 0;
}

// 0 1 1 2 3 5 8 13 21 34