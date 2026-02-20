//Q102: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.
#include <stdio.h>

int findCeiling(int arr[], int n, int x) {
    if (x <= arr[0])
        return 0;
    if (x > arr[n-1])
        return -1;
    int left = 0, right = n - 1, result = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;        
        if (arr[mid] == x)
            return mid;            
        if (arr[mid] < x) {
            left = mid + 1;
        }
        else {
            result = mid;
            right = mid - 1;
        }
    }
    
    return result;
}

int main() {
    int n, x;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to find ceiling for: ");
    scanf("%d", &x);
    int index = findCeiling(arr, n, x);
    if (index == -1) {
        printf("Ceiling of %d doesn't exist in array\n", x);
    } else {
        printf("Ceiling of %d is %d at index %d\n", x, arr[index], index);
    }
    
    return 0;
}
