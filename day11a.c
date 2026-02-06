//Q22: Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>
int main(){
    float cp,sp;
    printf("enter cost price and selling price:");
    scanf("%f %f",&cp,&sp);
    if(sp>cp){
        float profit=sp-cp;
        float profit_percent=(profit/cp)*100;
        printf("profit:₹%.2f\nprofit percentage:%.2f%%",profit,profit_percent);
    }
    else if(cp>sp){
        float loss=cp-sp;
        float loss_percent=(loss/cp)*100;
        printf("loss:₹%.2f\nloss percentage:%.2f%%",loss,loss_percent);
    }
    else{
        printf("no profit no loss");
    }
    return 0;
}

    
