// WAP to demonstrate iterators and const_iterators in C++ STL
#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main() {
    vector<int> a = {10, 20, 30, 40};

    // 1. Using a const_iterator to search/inspect elements without modifying them
    vector<int>::const_iterator cit;
    cout << "Index of element 20: ";
    for (cit = a.begin(); cit != a.end(); cit++) {
        if (*cit == 20) {
            cout << distance(a.cbegin(), cit) << endl;
        }
    }

    // 2. Using normal iterators to traverse the vector
    // Fixed variable shadowing by declaring it directly in the loop initialization
    cout << "Vector elements using iterator: ";
    for (auto it = a.begin(); it != a.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
