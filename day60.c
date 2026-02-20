//Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.

#include <stdio.h>
#include <stdlib.h>

void printMaxOfSubarrays(int arr[], int n, int k) {

    int deque[n];
    int front = 0, rear = -1;
    for (int i = 0; i < k; i++) {
        while (rear >= front && arr[i] >= arr[deque[rear]])
            rear--;
        
        deque[++rear] = i;
    }    
    for (int i = k; i < n; i++) {
        printf("%d ", arr[deque[front]]);        
        while (rear >= front && deque[front] <= i - k)
            front++;            
        while (rear >= front && arr[i] >= arr[deque[rear]])
            rear--;            
        deque[++rear] = i;
    }
    printf("%d", arr[deque[front]]);
}

int main() {
    int n, k;
    printf("\nEnter the size of array (or 0 to exit): ");
    scanf("%d", &n);    
    if (n > 0) {
        int arr[n];
        printf("Enter %d numbers separated by spaces: ", n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }        
        printf("Enter the window size k: ");
        scanf("%d", &k);        
        if (k > 0 && k <= n) {
            printf("Maximum elements in subarrays of size %d:\n", k);
            printMaxOfSubarrays(arr, n, k);
            printf("\n");
        } else {
            printf("Invalid window size. k should be between 1 and %d\n", n);
        }    }   
    return 0;}