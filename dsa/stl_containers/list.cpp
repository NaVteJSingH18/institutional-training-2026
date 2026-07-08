// WAP to demonstrate std::list (doubly linked list) and std::forward_list (singly linked list)
#include <iostream>
#include <list>
#include <forward_list>

using namespace std;

int main() {
    // std::list demonstration
    list<int> ls;
    ls.push_back(2);
    ls.push_front(2);
    ls.push_front(5);
    ls.pop_back();

    cout << "std::list elements: ";
    for (int ele : ls) {
        cout << ele << " ";
    }
    cout << endl;

    // std::forward_list demonstration
    forward_list<int> fl;
    fl.push_front(20);
    fl.push_front(343);
    fl.push_front(23);
    fl.pop_front();

    cout << "std::forward_list elements: ";
    for (int elm : fl) {
        cout << elm << " ";
    }
    cout << endl;

    return 0;
}
