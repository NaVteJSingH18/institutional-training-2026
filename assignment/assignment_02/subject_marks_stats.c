// Online C compiler to run C program online
#include <stdio.h>
int main() {
    // Write C code here
    float total=0;
    int avg;
    float per;
    
    int sub;
    printf("Enter number of subjects: ");    
    scanf("%d",&sub);
    int subjects[sub];
    printf("Enter marks of five subjects: ");
    for(int i = 0 ; i <sub; i++){
        scanf("%d",&subjects[i]);
    }
    for(int i = 0 ; i <sub; i++){
        total=total + subjects[i];
    }
    avg=total/sub;
    per=avg;
    printf("total is :%f\n",total);
    printf("average is:%d\n",avg);
    printf("percentage is:%f\n",per);

    return 0;
}