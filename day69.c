//Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
#include <stdio.h>
int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements (one element is repeated, others unique): ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int repeated = 0;
    for (int i = 0; i < n; i++)
        repeated ^= arr[i];
    for (int i = 1; i <= n - 1; i++)
        repeated ^= i;
    printf("Repeated element is %d", repeated);
    return 0;
}