// write a program to input two numbers and display thier sum, difference, product and quotient

#include <stdio.h>

int main(){
    int num1,num2,sum,diff,pro,quo;
    printf("enter number1:  ");
    scanf("%d",&num1);
    printf("enter number2: ");
    scanf("%d",&num2);
    sum=num1+num2;
    diff=num1-num2;
    pro=num1*num2;
    quo=num1/num2;
    printf("the sum of two numbers is %d \n",sum);
    printf("the difference of two numbers is %d \n",diff);
    printf("the product of two numbers is %d \n",pro);
    printf("the quotient of two numbers is %d \n",quo);
    return 0;
}