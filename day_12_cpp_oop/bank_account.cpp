#include <iostream>
using namespace std;

class BankAccount{
private:
    int accno=0;
    int bal=0;

public:
    
    void deposit(int amount, int acc) {
        bal += amount;
        accno+=acc;
        cout<<"deposited :"<<bal<<" to "<<accno<<endl;
        
    }

    
   void withdraw(int amount, int acc){
    bal-=amount;
    accno+=acc;
        cout<<"withdrawl :"<<bal<<" from "<<accno<<endl;
        

};
};
int main() {

  BankAccount obj;
  int acc;
  int amnt;
  cout<<"enter account number"<<endl;
    cin>>acc;
    cout<<"enter amount"<<endl;
    cin>>amnt;
  obj.deposit(amnt,acc);
  cout<<"enter account number"<<endl;
    cin>>acc;
    cout<<"enter amount"<<endl;
    cin>>amnt;
  obj.withdraw(amnt,acc);
    return 0;
}