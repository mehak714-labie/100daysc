/* Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit */
#include <stdio.h>
int main(){
    int u;
    int b=0;
    printf("enter the number of units consumed:");
    scanf("%d",&u);
    if(u<=100){
        b=u*5;
        printf("the bill is:₹%d",b);
    }
    else if(u<=200){
        b=100*5+(u-100)*7;
        printf("the bill is:₹%d",b);
    }
    else if(u<=300){
        b=100*5+100*7+(u-200)*10;
        printf("the bill is:₹%d",b);
    }
    else{
        b=100*5+100*7+100*10+(u-300)*12;
        printf("the bill is:₹%d",b);
    }
}