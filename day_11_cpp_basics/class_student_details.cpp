#include <iostream>
#include <string>
using namespace std;

class student {
    private:
    string name;
    int id;
    float marks;

    public:
    void setdata(){
        cout<<"enter name"<<endl;
        cin>>name;
        cout <<"enter id"<<endl;
        cin>>id;
        cout<<"enter marks"<<endl;
        cin>>marks;
    };
    void getdata(){
        cout<<name<<endl;
        cout<<id<<endl;
        cout<<marks<<endl;
    };
};

int main(){
    student s1;
    student s2;
    s1.setdata();
    s1.getdata();
}