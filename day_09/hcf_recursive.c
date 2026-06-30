#include <stdio.h>

int hcf(int a, int b);

int main()
{
    int a, b;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("HCF = %d", hcf(a, b));

    return 0;
}

int hcf(int a, int b)
{
    if (a == 0)     
        return b;

    return hcf(b % a, a);  // y= b%a , b= a , a = y
}