//Q39: Write a program to find the product of odd digits of a number.
#include <stdio.h>
int productOfOddDigits(int num) {
    int product = 1;
    int hasOdd = 0; 

    while (num != 0) {
        int digit = num % 10; 
        if (digit % 2 != 0) { 
            product *= digit; 
            hasOdd = 1; 
        }
        num /= 10; 
    }

    return 0; 
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int product = productOfOddDigits(number);
    if (product != 0) {
        printf("Product of odd digits of %d is: %d\n", number, product);
    } else {
        printf("There are no odd digits in %d.\n", number);
    }

    return 0;
}


