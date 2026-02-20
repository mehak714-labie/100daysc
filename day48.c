//Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
#include <stdio.h>
#include <string.h>
int main(){
    char s1[100], s2[100];
    printf("Enter first string: ");
    scanf("%s", s1);
    printf("Enter second string: ");
    scanf("%s", s2);
    if(strlen(s1) != strlen(s2)){
        printf("Not rotation\n");
        return 0;
    }
    char temp[200];
    strcpy(temp, s1);
    strcat(temp, s1);
    if(strstr(temp, s2) != NULL){
        printf("Rotation\n");
    } else {
        printf("Not rotation\n");
    }
    return 0;
}
