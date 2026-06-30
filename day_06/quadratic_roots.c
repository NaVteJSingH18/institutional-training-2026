#include<stdio.h>
#include<math.h>

int main() {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);

    float d = b*b - 4*a*c;

    if(d > 0) {
        float root1 = (-b + sqrt(d)) / (2*a);
        float root2 = (-b - sqrt(d)) / (2*a);

        printf("Root1 = %.2f\n", root1);
        printf("Root2 = %.2f\n", root2);
    }
    else if(d == 0) {
        float root = -b / (2*a);
        printf("Equal roots = %.2f\n", root);
    }
    else {
        printf("Imaginary roots\n");
    }

    return 0;
}