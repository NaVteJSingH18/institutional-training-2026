// WAP to demonstrate std::deque (double-ended queue)
#include <iostream>
#include <deque>

using namespace std;

int main() {
    deque<int> dq;

    // Inserting elements at both ends
    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(5);
    dq.push_front(1);

    cout << "Deque elements after pushing: ";
    for (int x : dq) {
        cout << x << " ";
    }
    cout << endl;

    cout << "Front element: " << dq.front() << endl;
    cout << "Back element: " << dq.back() << endl;

    // Access via index operator []
    cout << "Element at index 2: " << dq[2] << endl;

    // Removing elements from both ends
    dq.pop_front();
    dq.pop_back();

    cout << "Deque elements after pop_front and pop_back: ";
    for (int x : dq) {
        cout << x << " ";
    }
    cout << endl;

    cout << "Size of Deque: " << dq.size() << endl;
    cout << "Is Deque empty? " << (dq.empty() ? "Yes" : "No") << endl;

    return 0;
}
