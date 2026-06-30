#include <iostream>
using namespace std;

class Circle {
private:
    int radius;

public:
 
    Circle(int r) {
        radius = r;
    }


    Circle(const Circle &obj) {
        radius = obj.radius;

        cout << "Area from Copy Constructor: "
             << 3.14 * radius * radius << endl;
    }
};

int main() {

    Circle c1(5);

    Circle c2(c1);

    return 0;
}