//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include <stdio.h>
char ch;
int main (){
    printf("Enter a character :");
    scanf("%c",&ch);
    if (ch=='a'||ch=='i'||ch=='o'||ch=='u'||ch=='e'||ch=='A'||ch=='I'||ch=='E'||ch=='O'||ch=='U'){
        printf("%c is vowel ",ch);
    }
    else{
        printf("%c is consonant ",ch);
    }

    return 0;
}
