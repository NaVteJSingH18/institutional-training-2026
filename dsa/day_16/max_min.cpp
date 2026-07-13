#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[10] = {1,2,3,4};
    int maxVal = arr[0];
    int minVal = arr[0];

    for(int i = 1; i < 4; i++){
        if(arr[i] > maxVal){
            maxVal = arr[i];
        }
        if(arr[i] < minVal){
            minVal = arr[i];
        }
    }
    cout<<"max val "<<maxVal<<" "<<"min val: "<<minVal;
    return 0;
}