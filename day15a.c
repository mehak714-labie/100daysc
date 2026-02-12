//Q30: Write a program to reverse a given number.
#include <stdio.h>
int main(){
    int n,rev=0;
    printf("enter a number:");
    scanf("%d",&n);
    while(n!=0){
        int digit=n%10;
        rev=rev*10+digit;
        n/=10;
    }
    printf("the reversed number is: %d",rev);
    return 0;
}
    