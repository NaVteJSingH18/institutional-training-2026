// WAP to demonstrate std::stack (LIFO container adapter)
#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> st;

    st.push(3);
    st.push(54);
    st.push(71);
    st.push(2);

    cout << "Popped top element: " << st.top() << endl;
    st.pop(); // Removes 2

    cout << "Is stack empty? " << (st.empty() ? "Yes" : "No") << endl;
    cout << "Size of stack: " << st.size() << endl;

    cout << "Stack elements (top to bottom): ";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    return 0;
}
