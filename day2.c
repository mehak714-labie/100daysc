//write a program to calculate the area and perimeter of a rectangle given its length and breadth

#include <stdio.h>

int main(){
    int l,b,peri,ar;
    printf("enter length:  ");
    scanf("%d",&l);
    printf("enter breadth: ");
    scanf("%d",&b);
    peri=2*(l+b);
    ar=l*b;
    printf("the perimeter of rectangle is %d \n",peri);
    printf("the area of rectangle is %d \n",ar);
    return 0;
}