#include<iostream>
using namespace std;

class Animal{
        public:
        virtual void sound(){
            cout<<"sound";
        }
};

class Dog :public Animal{
    public:
    void sound(){
        cout<<"bark\n";
    }
};

class Cat :public Animal{
    public:
    void sound(){
        cout<<"meow\n";
    }
};
int main(){
    Dog b;
    b.sound();
    Cat m;
    m.sound();
    return 0;
}

