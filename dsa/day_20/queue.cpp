#include <iostream>
using namespace std;

#define SIZE 5

class Queue
{
    int front, rear;
    int arr[SIZE];

public:
    Queue()
    {
        front = -1;
        rear = -1;
    }

    void enqueue()
    {
        int value;

        if (rear == SIZE - 1)
        {
            cout << "Queue Overflow" << endl;
            return;
        }

        cout << "Enter value: ";
        cin >> value;

        if (front == -1)
        {
            front = 0;
        }

        rear++;
        arr[rear] = value;

        cout << "Element inserted successfully." << endl;
    }

    void dequeue()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue Underflow" << endl;
            return;
        }

        cout << "Deleted Element: " << arr[front] << endl;
        front++;

        if (front > rear)
        {
            front = -1;
            rear = -1;
        }
    }

    void display()
    {
        if (front == -1)
        {
            cout << "Queue is Empty." << endl;
            return;
        }

        cout << "Queue Elements: ";

        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
    }
};

int main()
{
    Queue q;
    int choice;

    do
    {
        cout << "\n===== QUEUE MENU =====" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            q.enqueue();
            break;

        case 2:
            q.dequeue();
            break;

        case 3:
            q.display();
            break;

        case 4:
            cout << "Exiting Program..." << endl;
            break;

        default:
            cout << "Invalid Choice!" << endl;
        }

    } while (choice != 4);

    return 0;
}