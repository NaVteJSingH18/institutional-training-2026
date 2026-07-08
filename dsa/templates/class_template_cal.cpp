// WAP to create a class named cal that has four functions: add, sub, multiply, divide
#include <iostream>
#include <stdexcept>

using namespace std;

template <typename X>
class cal {
public:
    X add(X a, X b) {
        return a + b;
    }

    X sub(X a, X b) {
        return a - b;
    }

    X multiply(X a, X b) {
        return a * b;
    }

    X divide(X a, X b) {
        if (b == 0) {
            throw runtime_error("Error: Division by zero!");
        }
        return a / b;
    }
};

int main() {
    cal<double> obj;

    cout << "Addition (5.5 + 6.0): " << obj.add(5.5, 6.0) << endl;
    cout << "Subtraction (5.5 - 6.0): " << obj.sub(5.5, 6.0) << endl;
    cout << "Multiplication (2 * 4): " << obj.multiply(2, 4) << endl;
    
    try {
        cout << "Division (5 / 2): " << obj.divide(5, 2) << endl;
        cout << "Division (5 / 0): " << obj.divide(5, 0) << endl;
    } catch (const exception& e) {
        cout << e.what() << endl;
    }

    return 0;
}
