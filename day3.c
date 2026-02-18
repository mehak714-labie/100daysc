//ques5 write a program to convert temperature from celsius to feahrenheit

#include <stdio.h>

int main(){
    float c,f;
    printf("enter Celsius: ");
    scanf("%f",&c);
    f=(9/5*c)+32;
    printf("Fahrenheit=%f",f);
    return 0;

}