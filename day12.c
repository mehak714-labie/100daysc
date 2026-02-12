/*Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled */
#include <stdio.h>
int main(){
    int d;
    int f=0;
    printf("enter the number of late days:");
    scanf("%d",&d);
    if(d<=5){
        f=d*2;
        printf("the fine is:₹%d",f);
    }
    else if(d<=10){
        f=5*2+(d-5)*4;
        printf("the fine is:₹%d",f);
    }
    else if(d<=30){
        f=5*2+5*4+(d-10)*6;
        printf("the fine is:₹%d",f);
    }
    else{
        printf("Membership Cancelled");
    }
}