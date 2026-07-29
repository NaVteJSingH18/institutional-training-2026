#include<iostream>
using namespace std;

int main(){
    int arr[]={5,10,15,20,25,30,35};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target=30;
    int low=0;
    int high=size-1;
    int flag=-1;
    int operation=0;
    while(low<=high){
        operation++;
        int mid=low+(high-low)/2;
        if(arr[mid]==target){
            flag=1;
           
            cout<<"target is found at index : "<<mid<<endl;
            break;
        }
        else if(arr[mid]>target){
            high=mid-1;

        }
        else{
            low=mid+1;
        } 
    }
    cout<<"total operations :"<<operation<<endl;
    if(flag==-1){
    cout<<"value not found";
    }
    return 0;
}