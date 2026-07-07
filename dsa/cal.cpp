//wap to create a class name cal that have a four func add sub mul div

#include<bits/stdc++.h>

using namespace std;
template<typename X>

  class cal{
    public:
    X add(X a,X b){
        return a+b;
    }
    X sub(X a,X b){
        return a-b;
    }
    X multiply(X a,X b){
        return a*b;
    }
    X divide(X a,X b){
        if (b!=0){
        return a/b;
        }
    }
  };
int main(){
  cal<double> obj;  

 cout<< obj.add(5.5,6.0)<<endl;
  cout<< obj.multiply(2,4);



  
    return 0;

}