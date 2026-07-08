// WAP to demonstrate std::map (Key-Value Association)
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map<int, string> m;
    m.insert({1, "ram"});
    m.insert({3, "G.one"});
    m.insert({4, "sanjay"});
    m[2] = "shyam"; // Inserts key 2 with value "shyam"

    // Trying to insert a duplicate key using insert
    // Note: This insert fails because key 1 already exists, and its value remains "ram"
    auto result = m.insert(make_pair(1, "raone"));
    if (!result.second) {
        cout << "Notice: Insert of key 1 failed because it already exists with value: " << result.first->second << endl;
    }

    // Overwriting a key using operator[]
    m[1] = "raone"; // Overwrites "ram" with "raone"
    cout << "After overwriting key 1 using operator[], its value is: " << m[1] << endl;

    cout << "Map contents (ordered by key):" << endl;
    for (auto const& pair : m) {
        cout << pair.first << " : " << pair.second << endl;
    }

    return 0;
}
