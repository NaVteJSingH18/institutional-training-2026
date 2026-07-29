#include<iostream>
using namespace std;
class A {
public:
    int add ( int a ,int b, int c){
       return a+b+c;
    };

};
class B : public A {
    public:
    int add (int x, int y){
        return x+y;
    }
};

int main(){
    A a;
    cout << a.add(4,5,6);
    
    return 0;
}