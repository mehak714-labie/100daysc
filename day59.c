//Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

#include <stdio.h>
#include <limits.h>

int maxSumSubarray(int arr[], int n, int k) {
    if (n < k || k <= 0) {
        printf("Invalid input: k should be between 1 and %d\n", n);
        return -1;    }
    int max_sum = 0;
    for (int i = 0; i < k; i++) {
        max_sum += arr[i];
    }
    int window_sum = max_sum;    
    for (int i = k; i < n; i++) {
        window_sum += arr[i] - arr[i - k];
        if (window_sum > max_sum) {
            max_sum = window_sum;
        }
    }
    return max_sum;  }

int main() {
    int n, k;
    printf("Enter the size of array (or 0 to exit): ");
    scanf("%d", &n);
    if (n > 0) {
        int arr[n];
        printf("Enter %d numbers separated by spaces: ", n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }        
        printf("Enter the window size k: ");
        scanf("%d", &k);
        
        int result = maxSumSubarray(arr, n, k);
        if (result != -1) {
            printf("Maximum sum of subarray of size %d is: %d\n", k, result);
        }
    }    
    return 0;
}