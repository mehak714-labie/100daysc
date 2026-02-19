// Write a program to swap two numbers using a third variable.

#include <stdio.h>

int main() {
    int a,b,c=0;
    printf("enter number1:");
    scanf("%d",&a);
    printf("enter number2:");
    scanf("%d",&b);
    printf("original squence: %d %d",a,b);
    c=a;
    a=b;
    b=c;
    printf("swapped= %d %d",a,b);
    return 0;
}