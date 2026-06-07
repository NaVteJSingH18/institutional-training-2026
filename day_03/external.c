#include <stdio.h>
#include "for_external.c"

extern int z;

extern void hi();

void hello (int y){
    static int x = 10;
    printf("%d\n", ++x+y+z);
}

int main(){
    hello(10);
    hello(10);
    hello(10);

    hi();

    return 0;
}