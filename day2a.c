//ques4 write a program to calculate the area and circumference of a circle given its radius

#include <stdio.h>

int main(){
    int r;
    float ar,cir;
    printf("enter radius: ");
    scanf("%d",&r);
    cir=2*3.14*r;
    ar=3.14*r*r;
    printf("the Circumference is %f \n",cir);
    printf("the area of circle is %f \n",ar);
    return 0;
}