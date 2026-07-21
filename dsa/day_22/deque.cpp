// Double ended queue implementation
#include<iostream>
#define size 5
using namespace std;

class deque
{
    int arr[size];
    int front, rear;

public: 
        deque(){
            front = -1;
            rear=-1;
        }
        
        void insertRear(){
            int value;
            cout<<"Enter value: ";
            cin>>value;
            if(rear==size-1){
                cout<<"Queue is full"<<endl;
                return;
            }
            if(front ==-1){
                front =0;
                rear=0;
                arr[rear]=value;
                return;
            }
            rear++;
            arr[rear]=value;
            return;
        }

        void insertFront(){
            int value;
            cout<<"Enter value: ";
            cin>>value;
            if(front==0){
                cout<<"Invalid "<<endl;
                return;
            }
            if(front==-1){
                front=0;
                rear=0;
                arr[front]=value;
                return;
            }; 

            front--;
            cout<<"value is added in front of the queue"<<endl;
            arr[front]=value;

        } 

        void deleteFront(){
            if(front==-1){
                cout<<"Queue is empty"<<endl;
                return;
            }
            if(front==rear){

                front=-1;
                rear=-1;
                return;
            }
            cout<<arr[front]<<" is deleted from front of queue"<<endl;
            front++;

        }

        void deleteRear()
        {
            if(front==-1){
                cout<<"Queue is empty"<<endl;
                return;
            }
            if(front==rear){
                front=-1;
                rear=-1;
                return;
            }
            cout<<arr[rear]<<" is deleted from rear of queue"<<endl;
            rear--;
        }

        void display()
        {
            if(front == -1)
            {
                cout << "Deque is empty" << endl;
                return;
            }
        
            cout << "Deque elements: ";
            for(int i = front; i <= rear; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }

};

int main()
{
    deque d1;

    int type;
    cout<<"Enter Deque Type (1 for Input Restricted, 2 for Output Restricted): ";
    cin>>type;

    int ch;
    char choice='y';

    // ---------------- Input Restricted ----------------

    if(type==1)
    {
        do
        {
            cout<<"\nInput Restricted Deque"<<endl;
            cout<<"1. Insert Rear"<<endl;
            cout<<"2. Delete Front"<<endl;
            cout<<"3. Delete Rear"<<endl;
            cout<<"4. Display"<<endl;
            cout<<"5. Exit"<<endl;

            cout<<"Enter choice : ";
            cin>>ch;

            switch(ch)
            {
                case 1:
                    d1.insertRear();
                    break;

                case 2:
                    d1.deleteFront();
                    break;

                case 3:
                    d1.deleteRear();
                    break;

                case 4:
                    d1.display();
                    break;

                case 5:
                    choice='n';
                    break;

                default:
                    cout<<"Invalid Choice"<<endl;
            }

        }while(choice=='y');
    }

    // ---------------- Output Restricted ----------------

// ---------------- Output Restricted ----------------

else if(type==2)
{
    do
    {
        cout<<"\nOutput Restricted Deque"<<endl;
        cout<<"1. Insert Front"<<endl;
        cout<<"2. Insert Rear"<<endl;
        cout<<"3. Delete Front"<<endl;
        cout<<"4. Display"<<endl;
        cout<<"5. Exit"<<endl;

        cout<<"Enter choice : ";
        cin>>ch;

        switch(ch)
        {
            case 1:
                d1.insertFront();
                break;

            case 2:
                d1.insertRear();
                break;

            case 3:
                d1.deleteFront();
                break;

            case 4:
                d1.display();
                break;

            case 5:
                choice='n';
                break;

            default:
                cout<<"Invalid Choice"<<endl;
        }

    }while(choice=='y');
}
    return 0;
}
