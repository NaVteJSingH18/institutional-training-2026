#include<iostream>

using namespace std;
 class employee{
    public:
    string name;
    int employee_ID=0;
    double salary=0;

    void set_details(double salary,int employee_ID,string name){
         this->salary=salary;
         this->employee_ID=employee_ID;
         this->name=name;
    }

   void calculateSalary(string performance) {
    if (performance == "Excellent")
        salary += salary * 0.20;
    else if (performance == "Good")
        salary += salary * 0.10;
    else if (performance == "Average")
        salary += salary * 0.05;
}
void display(){
    cout<<name<<"'s "<<"salary is :"<<salary;
}
 };
 
 int main(){
    employee e1;
string name;
    int employee_ID;
    double salary;
    string performance;

    cout<<"enter name :";
    cin>>name;
    cout<<"enter emp id :";
    cin>>employee_ID;
    cout<<"enter basic salary :";
    cin>>salary;

    cout<<"enter performance :";
    cin>>performance;
    
e1.set_details(salary,employee_ID,name);
e1.calculateSalary(performance);
e1.display();
return 0;
 }