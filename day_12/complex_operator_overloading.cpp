#include<iostream>
using namespace std;

class Complex {
private:
    double real;
    double img;

public:
    Complex() {
        real = 0;
        img = 0;
    }

    Complex(double r, double i) {
        real = r;
        img = i;
    }

    Complex operator +(Complex obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.img = img + obj.img;
        return temp;
    }

    void display() {
        cout << real << " + " << img << "i" << endl;
    }
};

int main() {
    Complex c1(10, 20);
    Complex c2(20, 30);

    Complex c3 = c1 + c2;

    c3.display();

    return 0;
}