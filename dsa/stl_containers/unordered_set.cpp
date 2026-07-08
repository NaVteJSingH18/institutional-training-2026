// WAP to demonstrate std::unordered_set (Unsorted Unique Elements)
#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    unordered_set<int> us;
    us.insert(2);
    us.insert(1);
    us.insert(3);
    us.insert(43);
    us.insert(54);
    us.insert(65);

    cout << "Unordered set elements: ";
    for (auto ele : us) {
        cout << ele << " ";
    }
    cout << endl;

    // Search for element
    auto it = us.find(43);
    if (it != us.end()) {
        cout << "Element 43 found in unordered_set." << endl;
    } else {
        cout << "Element 43 not found in unordered_set." << endl;
    }

    return 0;
}
