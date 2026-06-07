#include<stdio.h>

  int main(){
    int x = 10;
    int y =22;

    // printf("%d", x++ + --x); undefined behavior

    printf("%d,%d,%d", x++ + --y,x,y);
    
    return 0;
  }
