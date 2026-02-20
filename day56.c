    //Q106: Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. If there does not exist next greater of current element, then next greater element for current element is -1.

    /*N.B:
    - Print the output for each element in a comma separated fashion.
    - Do not use Stack, use brute force approach (nested loop) to solve.*/
#include <stdio.h>

void findNxtGr(int arr[], int n, int result[]) {
    for (int i = 0; i < n; i++) {
        result[i] = -1;         
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                result[i] = arr[j];
                break; 
            }
        }
    }
}
int main() {
    int n;   
    printf("Enter the size of the array: ");
    scanf("%d", &n);   
    if (n <= 0) {
        printf("Please enter a valid array size.\n");
        return 1;
    }
    int arr[n];
    int result[n];
    
    printf("Enter %d elements of the array: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }    
    findNxtGr(arr, n, result);
    printf("Next greater elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d", result[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("\n");   
    return 0;
}