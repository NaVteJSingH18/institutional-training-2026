#include<iostream>
using namespace std;

void bubblesort(int arr[],int size){
 for(int i=0; i<size;i++){
        for(int j=0;j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main(){

    int arr []={2,5,4,1,3};
    int size=sizeof(arr)/sizeof(arr[0]);
   cout<<"before sorting"<<" : ";
   for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
   }
   cout<<"\n";
   cout<<"after sorting"<<" : ";
   bubblesort(arr,size);
   for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
   }
   return 0;
}