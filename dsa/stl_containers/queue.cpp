// WAP to demonstrate std::queue (FIFO container adapter)
#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> q;

    q.push(4);
    q.push(6);
    q.push(98);
    q.push(55);

    cout << "Front element: " << q.front() << endl;
    cout << "Back element: " << q.back() << endl;

    cout << "Queue elements (front to back): ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}
