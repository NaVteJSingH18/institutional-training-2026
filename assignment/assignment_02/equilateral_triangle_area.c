// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>
int main() {
    // Write C code here
    int side;
    printf("Enter side of the equilateral triangle: ");    scanf("%d",&side);
 float area= (sqrt(3) / 4) * (side * side);
    printf("%f",area);
   
    return 0;
}