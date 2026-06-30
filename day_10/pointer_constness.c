#include<stdio.h>

int main(){
int  *p;
printf("%d\n",*p);

p=NULL;
int x =20 ;
int y=30;
int *const ptr =&x; //constant pointer


// ptr = &y;//cannot change address

// ponter to constant 

// const int *p1;


printf("%d", *ptr);
return 0 ;

}