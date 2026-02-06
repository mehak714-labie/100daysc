//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>
int main(){
    int a,b,c;
    printf("enter the sides of triangle:");
    scanf("%d/n%d/n%d",&a,&b,&c);
    if(a==b && b==c){
        printf("it is an equilateral triangle");
    }
    else if(a==b || b==c || c==a){
        printf("it is an isosceles triangle");
    }
    else{
        printf("it is a scalene triangle");
    }
}