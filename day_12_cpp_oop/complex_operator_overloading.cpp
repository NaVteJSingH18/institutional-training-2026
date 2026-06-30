#include<iostream>
using namespace std;

class Complex {
    private:
    double real;
    double img;

    public:
    Complex(){


    }
    Complex (double r , double img){
        this->real=r;
        this->img=img;
    }
    Complex operator +(Complex Obj){

    }

};

int main(){
    Complex c1(10,20);
        Complex c2(20,30);

    double r = 10 ;
    double i =20;

    return 0;
}