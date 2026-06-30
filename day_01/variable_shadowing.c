// Global and Local Variables

#include <stdio.h>

int main(){
    int i = 30;

    {
        int i = 300;
        printf("%d", i);
    }
    
    return 0;
}