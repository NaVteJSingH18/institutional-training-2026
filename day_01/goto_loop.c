// Goto 

#include <stdio.h>

int main(){
    int i = 0;

    start:
    if(i < 10){
        printf("%d", i++);
    }
    goto start;
    
    return 0;
};