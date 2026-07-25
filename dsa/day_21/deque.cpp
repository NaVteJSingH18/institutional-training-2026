#include<iostream>
using namespace std;

#define size 5

class deque{
public:
    int front, rear;
    int arr[size];

    deque(){
        front = -1;
        rear = -1;
    }

    void insertRear();
    void insertFront();
    void deleteFront();
    void deleteRear();
    void display();
};

void deque::insertRear(){
    if((front==0 && rear==size-1) || (front==rear+1)){
        cout<<"Deque Overflow\n";
        return;
    }
    

    int val;
    cout<<"Enter value: ";
    cin>>val;

    if(front==-1){
        front=rear=0;
    }
    else if(rear==size-1){
        rear=0;
    }
    else{
        rear++;
    }

    arr[rear]=val;
}

void deque::insertFront(){
    if((front==0 && rear==size-1) || (front==rear+1)){
        cout<<"Deque Overflow\n";
        return;
    }

    int val;
    cout<<"Enter value: ";
    cin>>val;

    if(front==-1){
        front=rear=0;
    }
    else if(front==0){
        front=size-1;
    }
    else{
        front--;
    }

    arr[front]=val;
}

void deque::deleteFront(){
    if(front==-1){
        cout<<"Deque Underflow\n";
        return;
    }

    cout<<"Deleted element = "<<arr[front]<<endl;

    if(front==rear){
        front=rear=-1;
    }
    else if(front==size-1){
        front=0;
    }
    else{
        front++;
    }
}

void deque::deleteRear(){
    if(front==-1){
        cout<<"Deque Underflow\n";
        return;
    }

    cout<<"Deleted element = "<<arr[rear]<<endl;

    if(front==rear){
        front=rear=-1;
    }
    else if(rear==0){
        rear=size-1;
    }
    else{
        rear--;
    }
}

void deque::display(){
    if(front==-1){
        cout<<"Deque is Empty\n";
        return;
    }

    cout<<"Deque elements: ";

    int i=front;
    while(i!=rear){
        cout<<arr[i]<<" ";
        i=(i+1)%size;
    }
    cout<<arr[rear]<<endl;
}

int main(){
    deque dq;
    int type, ch;

    cout<<"Double Ended Queue Operations\n";
    cout<<"1. Input Restricted Deque\n";
    cout<<"2. Output Restricted Deque\n";
    cout<<"Enter your choice: ";
    cin>>type;

    if(type==1){
        do{
            cout<<"\n----- Input Restricted Deque -----\n";
            cout<<"1. Insert from Rear\n";
            cout<<"2. Delete from Front\n";
            cout<<"3. Delete from Rear\n";
            cout<<"4. Display\n";
            cout<<"5. Exit\n";
            cout<<"Enter your choice: ";
            cin>>ch;

            switch(ch){
                case 1:
                    dq.insertRear();
                    break;
                case 2:
                    dq.deleteFront();
                    break;
                case 3:
                    dq.deleteRear();
                    break;
                case 4:
                    dq.display();
                    break;
                case 5:
                    cout<<"Exiting...\n";
                    break;
                default:
                    cout<<"Invalid Choice\n";
            }

        }while(ch!=5);
    }
    else if(type==2){
        do{
            cout<<"\n----- Output Restricted Deque -----\n";
            cout<<"1. Insert from Front\n";
            cout<<"2. Insert from Rear\n";
            cout<<"3. Delete from Front\n";
            cout<<"4. Display\n";
            cout<<"5. Exit\n";
            cout<<"Enter your choice: ";
            cin>>ch;

            switch(ch){
                case 1:
                    dq.insertFront();
                    break;
                case 2:
                    dq.insertRear();
                    break;
                case 3:
                    dq.deleteFront();
                    break;
                case 4:
                    dq.display();
                    break;
                case 5:
                    cout<<"Exiting...\n";
                    break;
                default:
                    cout<<"Invalid Choice\n";
            }

        }while(ch!=5);
    }
    else{
        cout<<"Invalid Choice\n";
    }

    return 0;
}