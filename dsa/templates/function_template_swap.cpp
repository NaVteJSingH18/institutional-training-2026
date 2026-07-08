// WAP to swap two numbers using a function template
#include <iostream>

using namespace std;

template <typename X>
void swapo(X &a, X &b) {
    X temp = a;
    a = b;
    b = temp;
    cout << "Inside swapo - a: " << a << ", b: " << b << endl;
}

int main() {
    int a = 5;
    int b = 6;
    float p = 5.5f;
    float q = 6.6f;

    cout << "Before swap - a: " << a << ", b: " << b << endl;
    swapo(a, b);
    cout << "After swap - a: " << a << ", b: " << b << "\n" << endl;

    cout << "Before swap - p: " << p << ", q: " << q << endl;
    swapo(p, q);
    cout << "After swap - p: " << p << ", q: " << q << endl;
    
    return 0;
}
