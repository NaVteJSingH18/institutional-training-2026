    #include<stdio.h>
    #include <math.h>
    #include<string.h>
    int main(){

        int org;
        int cnt;
        printf("enter org");
        scanf("%d",&org);
        int num=org;
        while(num>0){
            num/=10;
            cnt++;
        }
        num = org;
        while(num>0){
           int rem= num%10;
        }
        return 0;
    }