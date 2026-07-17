#include <bits/stdc++.h>
using namespace std;

#define SIZE 5

class Stack {
    int top;
    int arr[SIZE];

public:
    Stack() {
        top = -1;
    }

    void push() {
        int val;
        if (top == SIZE - 1) {
            cout << "Stack Overflow\n";
            return;
        }

        cout << "Enter value: ";
        cin >> val;

        top++;
        arr[top] = val;
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
            return;
        }

        cout << "Deleted element: " << arr[top] << endl;
        top--;
    }

    void peek() {
        if (top == -1) {
            cout << "Stack is Empty\n";
            return;
        }

        cout << "Top element: " << arr[top] << endl;
    }

    void display() {
        if (top == -1) {
            cout << "Stack is Empty\n";
            return;
        }

        cout << "Stack elements are:\n";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack s1;
    char choice = 'y';
    int ch;

    do {
        cout << "\n********** Stack Operations **********\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch) {
        case 1:
            s1.push();
            break;

        case 2:
            s1.pop();
            break;

        case 3:
            s1.peek();
            break;

        case 4:
            s1.display();
            break;

        case 5:
            cout << "Exiting...\n";
            return 0;

        default:
            cout << "Invalid Choice\n";
        }

        cout << "\nDo you want to continue? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}