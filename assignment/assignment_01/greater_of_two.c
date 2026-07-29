#include<stdio.h>

int main (){
    int x ;
    int y;
    printf("Enter the value of x ");
    scanf("%d",&x);
    printf("Enter the value of y ");
    scanf("%d",&y);

     if(x>y){
        printf("x is greater ", x);
     }else{
        printf("y is greater ", y);
     }
     return 0;

}