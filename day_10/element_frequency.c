#include<stdio.h>

int main(){

    int arr[6];
    int arr2[6]={0};
    printf("enter the values of array");
    for (int i=0;i<6;i++){

        scanf("%d",&arr[i]);

    }

    for ( int i = 0; i < 6-1 ; i ++){

        int count = 1;
        for(int j=i+1;j<6;j++){
            if(arr[i] == arr[j]) {

                count++;
                arr2[j] = 1;
            }
            }
        }

        return 0;
    }


