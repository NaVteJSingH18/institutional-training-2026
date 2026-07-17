#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *next;
		node()
		{
			data=0;
			next=NULL;
		}
		node(int val)
		{
			data=val;
			next=NULL;
		}
};
class stack{
	node *top = NULL;
	public:
		void push()
		{
			int val;
			cout<<"Enter value:";
			cin>>val;
			node *ptr = new node(val);
			if(ptr==NULL)
			{
				cout<<"Heap Overflow..."<<endl;
				return ;
			}
			if(top==NULL)
			{
				top=ptr;
				cout<<"Node Pushed to Stack..."<<endl;
				return ;
			}
			ptr->next=top;
			top=ptr;
			cout<<"Node Pushed to Stack..."<<endl;
			
		}
		void pop()
		{
		  if(top==NULL)
		  {
		  	cout<<"Stack is Empty..."<<endl;
		  	return ;
		  }	
		  node *temp=top;
		  top=top->next;
		  delete temp;
		  cout<<"Node Popped/Deleted from Stack..."<<endl;
		}
		void display()
		{
			if(top==NULL)
			{
				cout<<"Stack is Empty..."<<endl;
				return;
			}
			node *temp=top;
			cout<<"Stack Elements:"<<endl;
			while(temp!=NULL)
			{
				cout<<temp->data<<" ";
				temp=temp->next;
			}
					
			}
		void peek()
		{
			if(top==NULL)
			{
				cout<<"Stack is Empty..."<<endl;
				return ;
			}
			cout<<"Top Value in Stack: "<<top->data<<endl;
		}
};
int main()
{
	stack s1;
	int ch;
	char choice='y';
	do
	{
		cout<<"\nStack operation."<<endl;
		cout<<"1. Push"<<endl;
		cout<<"2. Pop"<<endl;
		cout<<"3. Display"<<endl;
		cout<<"4. Peek"<<endl;
		cout<<"5. Exit"<<endl;
		cout<<"Enter your choice:";
		cin>>ch;
		switch(ch)
		{
			case 1: s1.push();
			       break;
			case 2: s1.pop();
			       break;
			case 3: s1.display();
			        break;
			case 4: s1.peek();
			        break;
			case 5: choice='n';
			        break;
			default: cout<<"Invalid Choice..."<<endl;
			        break;
		}
	}
	while(choice=='y');
	return 0;
}