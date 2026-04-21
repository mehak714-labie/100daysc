//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include <stdio.h>
int main(){
    char c;
    prinntf("enter a character:");
    scanf("%c",&c);
    if (c>='A' && c<='Z'){
        printf("%c is uppercase alphabet",c);
    }
    else if (c>='a' && c<='z'){
        printf("%c is lowercase alphabet",c);
    }
    else if (c>='0' && c<='9'){
        printf("%c is digit",c);
    }
    else{
        printf("%c is special character",c);
    }



}