//Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
#include <stdio.h>
int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements (numbers from 0 to %d, one missing): ", n, n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int totalSum = n * (n + 1) / 2;
    int aSum = 0;
    for (int i = 0; i < n; i++)
        aSum += arr[i];

    int missing = totalSum - aSum;
    printf("Missing number is %d", missing);

    return 0;
}