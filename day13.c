//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>
int main(){
    int a,b;
    char op;
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("enter an operator (+, -, *, /, %%):");
    scanf(" %c",&op);
    switch(op){
        case '+':
            printf("%d + %d = %d",a,b,a+b);
            break;
        case '-':
            printf("%d - %d = %d",a,b,a-b);
            break;
        case '*':
            printf("%d * %d = %d",a,b,a*b);
            break;
        case '/':
            if(b!=0)
                printf("%d / %d = %.2f",a,b,(float)a/b);
            else
                printf("Error: Division by zero");
            break;
        case '%':
            if(b!=0)
                printf("%d %% %d = %d",a,b,a%b);
            else
                printf("Error: Division by zero");
            break;
        default:
            printf("Invalid operator");
    }
    return 0;
}
