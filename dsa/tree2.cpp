#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node *right;

    
    node(){
        data=0;
        left=NULL;
        right=NULL;
    }
    node (int val){
        this->data=val;
        left=NULL;
        right=NULL;
    }
};

class BST{
    
    public:
    node *root;
    BST(){
        root=NULL;
    }
    node *createBST(node *temp, int val){
       
        node *ptr=new node(val);
        if(temp==NULL){
            return ptr;
        }
       if(val<temp->data){
        temp->left=createBST(temp->left,val);
       }else{
        temp->right=createBST(temp->right,val);
       }
        return temp;
    }
    public:
    void create(){
         int val;
        cout<<"Enter the value : ";
        cin>>val;

        root = createBST(root,val);
    }
    void preorder(node *temp){
        if(temp==NULL){
            return;
        }
        cout<<temp->data<<" ";
        preorder(temp->left);
        preorder(temp->right);
    }
};

int main(){
    BST B1;
    char choice ='y';
    int ch;

    do{
        cout<<"Binary Search Tree"<<endl;
        cout<<"1 . Create BST"<<endl;
        cout<<"2 . Display Preorder"<<endl;
        cout<<"3 . Exit"<<endl;
        cout<<"Enter your choice : ";
        cin>>ch;

        switch (ch)
        {
        case 1:
            B1.create();
            break;
        case 2:
            B1.preorder(B1.root);
            break;
        case 3:
            choice='n';
            break;
        default:
            cout<<"Invalid choice "<<endl;
            break;
        }
    }while(choice=='y');
}