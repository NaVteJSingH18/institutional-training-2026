#include<bits/stdc++.h>
using namespace std;

int main(){
   char ch ='A';
   char arr[26];
   for(int i=0;i<26;i++){
    arr[i]=ch++;
   }
   for(char ele : arr){
    cout<<ele<<" ";
   }

    return 0;
}