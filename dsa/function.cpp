#include<iostream>

using namespace std;

template<typename X >
X add(X a , X b){
    return a+b;
}

int main(){
    cout<<"For integer :"<<add(5,6)<<endl;
    cout<<"For Float:"<<add(5.5f,6.6f)<<endl;
    cout<<"For double:"<<add(5.0,6.5)<<endl;
    return 0;

}