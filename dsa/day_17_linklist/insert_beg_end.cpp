#include <iostream>
using namespace std;
class node
{

public:
    int data;
    node *next;
    node()
    {
        data = 0;
        next = NULL;
    }
    node(int val)
    {

        data = val;
        next = NULL;
    }
}

;
class linkedlist
{
    node *start = NULL;

public:
    void insert()
    {
        int ch;
        char choice2 = 'y';
        do
        {
            cout << "\n1. Insert at Begin." << endl;
            cout << "\n2. Insert at End." << endl;
            cout << "\n3. Exit." << endl;
            cout<< "\n4. Insert at position"<<endl; 
            
            cout << "Enter your choice." ;
            cin >> ch;
            switch (ch)
            {
            case 1:
                at_begin();
                break;
            case 2:
                at_end();
                break;
            case 3:
                choice2 = 'n';
                break;
            default:
                cout << "Invalid Choice!!";
                break;
            }
        } while (choice2 == 'y');
    }

    void display()
    {
        node *temp = start;
        cout << "List." << endl;
        while (temp != NULL)
        {
            if (start == NULL)
            {
                cout << "List is Empty!!" << endl;
                return;
            }
            else
            {
                cout << temp->data << "->";
                temp = temp->next;
            }

        }
        cout<<"NULL";
    }
    void delet()
    {
        int ch;
        char choice3 = 'y';
        do
        {
            cout << "\n1. delete at Begin." << endl;
            cout << "\n2. delete at End." << endl;
            cout << "\n3. Exit." << endl;
            cout<<"\n4 delete at a position"<<endl;
            cout << "Enter your choice.";
            cin >> ch;
            switch (ch)
            {
            case 1:
                del_at_begin();
                break;
            case 2:
                del_at_end();
                break;
            case 3:
                choice3 = 'n';
                break;
            case 4:
                del_at_position();
            default:
                cout << "Invalid Choice at del!!";
                break;
            }
        } while (choice3 == 'y');
    }
    void del_at_begin()
    {
        if (start == NULL)
        {
            cout << "linkedlist is empty";
        }
        else
        {
            start = start->next;
            cout << "node deleted !!" << endl;
        }
    }

    void del_at_end()
    {
        if (start == NULL)
        {
            cout << "linked-list is empty";
        }
        node *temp = start;

        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        cout << "Node delet at End!!" << endl;
    }

    void at_begin()
    {
        int num;
        cout << "Enter Number:";
        cin >> num;
        node *ptr = new node(num);
        if (start == NULL)
        {
            start = ptr;
        }
        else
        {
            ptr->next = start;
            start = ptr;
            cout << "Node Inserted!!" << endl;
        }
    }

    void del_at_position(){
        cout<<"enter a position"<<endl;
        int pos;
        cin>>pos;
        node*temp=start;
        if(start==NULL){
            cout<<"linked list is empty";
            return;
        }
        if(pos==1 && start->next==NULL){
            temp=start;
            start=NULL;
             delete temp;
        }else{
        for(int i =1;i<pos-1 && temp!=NULL; i++){
            temp=temp->next;
        }
        if(temp==NULL){
            cout<<"Invalid position!!"<<endl;
            return;
        }
        node*temp_del=temp->next;
        temp->next=temp->next->next;
        delete temp_del;
        cout<<"node deleted"<<endl;
        }
    }

    void at_end()
    {
        int val;
        cout << "enter the value:";
        cin >> val;
        node *ptr = new node(val);

        if (start == NULL)
        {
            start = ptr;
            cout << "Node Inserted!!" << endl;
            return;
        }

        node *temp = start;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = ptr;
        cout << "Node Inserted at End!!" << endl;
    }



    void update_val(){
    cout<<"enter previous value to update";
    int val;

    cin>>val;
    int new_val;
    cout<<"enter new value to update"<<endl;
    cin>>new_val;

    node*temp=start;
    while(temp->data!=val&& temp!=NULL){
        temp=temp->next;
    }
    if(temp==NULL){
        cout<<"value not available"<<endl;
    }
    temp->data=new_val;
}
void find_size(){
    if(start==NULL){
        cout<<"linked list is empty";
        return;
    }

    int count =1;
    node*temp=start;
    while(temp->next!=NULL){
        temp=temp->next;
        count++;
    }
    cout<<count<<endl;
    return ;     
}

};

int main()
{
    linkedlist l1;
    int ch;
    char choice = 'y';
    system("cls");
    do
    {
        cout << "\n Linked list Project:" << endl;
        cout << "\n1. Insert." << endl;
        cout << "\n2. Display." << endl;
        cout << "\n3. Exit." << endl;
        cout << "\n4. delete." << endl;
        cout<<"\n5. update value"<<endl;
        cout<<"\n6. find size of linked list"<<endl;
        cout << "Enter your choice.";
        cin >> ch;
        switch (ch)
        {
        case 1:
            l1.insert();
            break;
        case 2:
            l1.display();
            break;
        case 3:
            choice = 'n';
            break;
        case 4:
            l1.delet();
            break;
        case 5:
        l1.update_val();
            break;
        case 6:
        l1.find_size();
            break;
        default:
            cout << "Invalid Choice!!" << endl;
            break;
        }

    } while (choice == 'y');
    return 0;
}