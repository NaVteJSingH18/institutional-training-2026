#include<bits/stdc++.h>
using namespace std;
int sec_largest(int arr[],int n){

        int max = INT_MIN;
        int sec_max = INT_MIN;
        for( int i=0; i<n;i++){
           if(arr[i]>max){
               sec_max=max;
               max=arr[i];
           }else if(arr[i]!=max && arr[i]>sec_max ){
                sec_max=arr[i];  
           }
        }
        return sec_max;
}


int main(){
 int arr[100]={1434,234,32,34,6,36,456};
 int n=7;
 cout<<sec_largest(arr,n);
 return 0;
}
