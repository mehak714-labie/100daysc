//Q37: Write a program to find the LCM of two numbers.
#include <stdio.h>
int computeGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int computeLCM(int a, int b) {
    return (a * b) / computeGCD(a, b);
}
int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int lcm = computeLCM(num1, num2);
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}
