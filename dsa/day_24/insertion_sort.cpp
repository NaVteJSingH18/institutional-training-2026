#include<iostream>
using namespace std;

void insertion_sort(int size,int arr[]){

    for(int i=1; i<size;i++){
        int prev=i-1;
        int curr=arr[i];


        while(prev>=0&&arr[prev]>curr){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr;

    }


    
}



int main(){

    int arr[]={5,7,2,3,4,8,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"before sorting"<<endl;
    for(int i=0; i<size;i++){
        cout<<arr[i]<<" ";
    }
    insertion_sort(size,arr);

    cout<<"\n"; 
    cout<<"after insertion"<<endl;
    for(int i=0; i<size;i++){
        cout<<arr[i]<<" ";
    }

return 0;
}