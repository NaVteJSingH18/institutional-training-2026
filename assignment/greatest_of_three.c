#include<stdio.h>
int main(){
    int x;
    int y;
    int z;

     printf("Enter values of x, y and z: ");
    scanf("%d %d %d", &x, &y, &z);

    if(x>y && x>z){
        printf("x is greater than y and z",x);
    }else if (y>x && y>z){
        printf(" y is greater than x and z");
    }else if (z>x && z>y){
        printf("z is greater than x and y");
        return 0;
}
}