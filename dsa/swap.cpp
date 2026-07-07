    // swap a two number , use template 
#include<bits/stdc++.h>
using namespace std;
template<typename X>

X swapo(X &a, X &b){
    
 X temp = a;
 a=b;
 b=temp;
 cout<<"a is "<<a;
    cout<<"b is"<<b;
}
int main(){
    int  a=5;
    int b=6;
   float p=5.5;
   float q=6.6;

    swapo(a,b);
    swapo(p,q);
    
    return 0;
}