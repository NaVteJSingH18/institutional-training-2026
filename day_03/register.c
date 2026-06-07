#include <stdio.h>

int main(){
    register int x;
    scanf("%d", &x);
    printf("%d", x);

    return 0;
}
//error: cannot take the address of a register variable 'x'
//Why?

// register tells the compiler:

// "Try to store this variable in a CPU register instead of memory."
//A register variable may not have a memory address that can be accessed.

//Therefore, this is illegal:&x