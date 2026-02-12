//Q28: Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int product=1;
    for(int i=2;i<=n;i+=2){
        product*=i;
    }
    printf("the product of even numbers from 1 to %d is: %d",n,product);
    return 0;
}
