// WAP to demonstrate std::set (Sorted Unique Elements)
#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> s;
    s.insert(2);
    s.insert(1);
    s.insert(3);
    s.insert(43);
    s.insert(54);
    s.insert(65);

    cout << "Set elements (sorted automatically): ";
    for (auto ele : s) {
        cout << ele << " ";
    }
    cout << endl;

    // Efficient lookup by storing the iterator
    auto it = s.find(43);
    if (it != s.end()) {
        cout << "Element 43 found in set: " << *it << endl;
    } else {
        cout << "Element 43 not found in set" << endl;
    }

    return 0;
}
