// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>
int main() {
    // Write C code here
    char chr [100];
    printf("Enter Characters: ");    
    for(int i = 0 ; i<3 ; i++){
        scanf(" %c",&chr[i]);
    }
    for(int i = 3 ; i>=0 ; i--){
        printf("%c",chr[i]);
    }
   
    return 0;
}