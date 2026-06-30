#include<stdio.h>

char alp;
scanf(" %c",&alp);
if(alp>='A' && alp<='Z')
alp = alp + 32;

switch(alp){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("the given alphabet is a vowel");
        break;
        default:
        printf("the given alphabet is a consonant");
}