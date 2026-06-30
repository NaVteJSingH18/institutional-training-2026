#include <stdio.h>

void change(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    change(&a, &b);
    printf("Values Swapped %d %d", a, b);
}