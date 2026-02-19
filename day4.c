//Q7: Write a program to swap two numbers without using a third variable
//

#include <stdio.h>

int main() {
    int a,b;
    printf("enter number1:");
    scanf("%d",&a);
    printf("enter number2:");
    scanf("%d",&b);
    printf("original swapping %d,%d",a,b);
        a=a-b;
        b=a+b;
        a=b-a;
        printf("after swapped= %d %d",a,b);
    return 0;
}
