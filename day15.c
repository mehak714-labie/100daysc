//Q29: Write a program to calculate the factorial of a number.
#include <stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    printf("the factorial of %d is: %d",n,fact);
    return 0;
}