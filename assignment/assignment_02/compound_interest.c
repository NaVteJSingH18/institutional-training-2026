// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>
int main() {
    // Write C code here
    float CI;
    int P;
    float R;
    int T;
    printf("enter value of Principle");
    scanf("%d",&P);
    printf("enter value of Rate");
    scanf("%f",&R);
    printf("enter value of Time");
    scanf("%d",&T);
    CI= P*pow((1 + R/100),T)-P;
printf("%.2f",CI);
    return 0;
}