#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,4,5,6,7,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    int val;
    cout<<"enter value to insert "<<endl;

    cin>>val;

    for(int i=0; i<=size;i++){
        if(arr[i]==val){
            cout<<i<<"th position contain value"<<val;
            break;
        }       
    }
    cout<<" value not found"<<endl;
    return 0;
}