#include<stdio.h>
int hcf(int a, int b);
int main(){

    

    int a,b;

    printf("enter a " );

    scanf("%d",&a);
    printf("enter b");
    scanf("%d",&b);
    printf("%d",hcf(a,b));
    return 0;
}
int hcf(int a, int b){
    int y;
while(a!=0){
    
        y=b%a;
        b=a;
        a=y;
    }
    return b;
    };
    