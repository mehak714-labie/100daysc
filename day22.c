// Q43: Write a program to check if a number is a strong number.
#include <stdio.h>
int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    int fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
int isStrongNumber(int num) {
    int original = num;
    int sum = 0;

    while (num != 0) {
        int digit = num % 10;
        sum += factorial(digit); 
        num /= 10; 
    }

    return sum == original;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isStrongNumber(num))
        printf("%d is a Strong Number\n", num);
    else
        printf("%d is NOT a Strong Number\n", num);

    return 0;
}