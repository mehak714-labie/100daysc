//Q34: Write a program to check if a number is prime.

#include <stdio.h>
int isPrime(int num) {
    if (num <= 1) return 0; // 0,1 not prime numbers
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; 
    }
    return 0;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
