//Q32: Write a program to check if a number is a palindrome.
#include <stdio.h>
int isPalindrome(int num) {
    int original = num;
    int reversed = 0;
    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return original == reversed;
}