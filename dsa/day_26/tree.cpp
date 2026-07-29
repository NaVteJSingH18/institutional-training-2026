#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};

class BinaryTree
{
private:
    Node *root;

public:

    BinaryTree()
    {
        root = NULL;
    }

    void create()
    {
        root = createTree();
    }

    void displayPreorder()
    {
        cout << "Preorder Traversal : ";
        preorder(root);
        cout << endl;
    }

    void displayInorder()
    {
        cout << "Inorder Traversal : ";
        inorder(root);
        cout << endl;
    }

    void displayPostorder()
    {
        cout << "Postorder Traversal : ";
        postorder(root);
        cout << endl;
    }
    void countNodes(){
        cout<<"Total Nodes in Binary Tree: "<<count(root)<<endl;
    }
    
    void countLeaf(){
        cout<<"Total Leaf Nodes in Binary Tree: "<<countLeafNodes(root)<<endl;
    }
    
    int count(Node *temp){
        if(temp==NULL){
            return 0;
        }
        return 1+ count(temp->left)+ count(temp->right);
    }

    int countLeafNodes(Node * temp){
        if(temp==NULL){
            return 0;

        }
        if(temp->left==NULL && temp ->right==NULL){
            return 1;
        }
        return countLeafNodes(temp->left) + countLeafNodes(temp->right);
    }
    Node* createTree()
    {
        int value;

        cout << "Enter Data (-1 for NULL): ";
        cin >> value;

        if(value == -1)
            return NULL;

        Node *newNode = new Node(value);

        cout << "Enter Left Child of " << value << endl;
        newNode->left = createTree();

        cout << "Enter Right Child of " << value << endl;
        newNode->right = createTree();

        return newNode;
    }

    void preorder(Node *temp)
    {
        if(temp == NULL)
            return;

        cout << temp->data << " ";
        preorder(temp->left);
        preorder(temp->right);
    }

    void inorder(Node *temp)
    {
        if(temp == NULL)
            return;

        inorder(temp->left);
        cout << temp->data << " ";
        inorder(temp->right);
    }

    void postorder(Node *temp)
    {
        if(temp == NULL)
            return;

        postorder(temp->left);
        postorder(temp->right);
        cout << temp->data << " ";
    }

};

int main()
{
    BinaryTree bt;

    int choice;
do
{
    cout << "\n========== MENU ==========\n";
    cout << "1. Create Binary Tree\n";
    cout << "2. Preorder Traversal\n";
    cout << "3. Inorder Traversal\n";
    cout << "4. Postorder Traversal\n";
    cout << "5. Count Total Nodes\n";
    cout << "6. Count Leaf Nodes\n";
    cout << "7. Exit\n";

    cout << "Enter Choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Before create\n";
            bt.create();
            cout << "After create\n";
            break;
        case 2:
            bt.displayPreorder();
            break;

        case 3:
            bt.displayInorder();
            break;

        case 4:
            bt.displayPostorder();
            break;

        case 5:
            bt.countNodes();
            break;

        case 6:
            bt.countLeaf();
            break;

        case 7:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid Choice\n";
    }

} while(choice != 7);

    return 0;

}