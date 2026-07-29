#include <iostream>
#include <string>
using namespace std;

class Rectangle {
public:
    int length;
    int width;
    
  
    Rectangle(int l, int w) {
        length = l; 
        width = w; 
    }

        Rectangle(const Rectangle &obj) {
        length = obj.length;
        width = obj.width;
        cout << "Area from Copy Constructor: " << length * width << endl;
    }
};

int main() {
 
    Rectangle r1(5, 3);
    

    Rectangle r2(r1); 
    
    return 0;
}