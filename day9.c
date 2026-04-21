//Q17: Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, discriminant, r1, r2, realPart, imagPart;
    
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);
    
    discriminant = b*b - 4*a*c;
    if (discriminant > 0) {
        r1 = (-b + sqrt(discriminant)) / (2*a);
        r2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Roots are real and different.\n");
        printf("Root 1 = %.2f\n", r1);
        printf("Root 2 = %.2f\n", r2);
    } 
    else if (discriminant == 0) {
        r1 = r2 = -b / (2*a);
        printf("Roots are real and same.\n");
        printf("Root 1 = Root 2 = %.2f\n", r1);
    } 
    else {
        realPart = -b / (2*a);
        imagPart = sqrt(-discriminant) / (2*a);
        printf("Roots are complex and different.\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imagPart);
    }
    
    return 0;
}

