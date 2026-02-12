//Q33: Write a program to check if a number is an Armstrong number.

#include <stdio.h>
int isArmstrong(int num) {
    int original = num;
    int sum = 0;
    int digits = 0;
    int temp = num;

    while (temp > 0) {  // Count the no of digits
        digits++;
        temp /= 10;
    }

    temp = num;

    while (temp > 0) {
        int digit = temp % 10;
        sum += digit * digit * digit; 
        temp /= 10;
    }

    return original == sum;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
