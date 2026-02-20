//Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

#include <stdio.h>

int findPivotInteger(int n) {
    int total_sum = n * (n + 1) / 2;
    
    for (int x = 1; x <= n; x++) {
        int left_sum = x * (x + 1) / 2;
        int right_sum = total_sum - (x - 1) * x / 2;
        if (left_sum == right_sum) {
            return x;
        }
    }
    
    return -1;  // No pivot found
}

int main() {
    int n;
    
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }
    
    int pivot = findPivotInteger(n);
    if (pivot == -1) {
        printf("No pivot integer exists for n = %d\n", n);
    } else {
        printf("The pivot integer for n = %d is: %d\n", n, pivot);
    }
    
    return 0;
}