//Q38: Write a program to find the sum of digits of a number.
#include <stdio.h>
int sumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10; // Add the last digit to sum
        num /= 10;       // Remove the last digit
    }
    return sum;
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int sum = sumOfDigits(number);
    printf("Sum of digits of %d is: %d\n", number, sum);

    return 0;
}
