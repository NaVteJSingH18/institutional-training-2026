// WAP to demonstrate std::vector and sorting using a custom comparator
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Custom comparator for descending order
bool compare(int a, int b) {
    return a > b; // Strict weak ordering
}

int main() {
    vector<int> a;
    a.push_back(10);
    a.push_back(30);
    a.push_back(20);

    cout << "Original vector elements: ";
    for (int ele : a) {
        cout << ele << " ";
    }
    cout << endl;

    // Sorting in descending order using custom comparator
    sort(a.begin(), a.end(), compare);

    cout << "Sorted vector (descending): ";
    for (int ele : a) {
        cout << ele << " ";
    }
    cout << endl;

    return 0;
}
