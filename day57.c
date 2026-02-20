//107: Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.

/*N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.*/
#include <stdio.h>
void findPrevGr(int arr[], int n, int result[]) {
    result[0] = -1;
    
    for (int i = 1; i < n; i++) {
        result[i] = -1; 
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                result[i] = arr[j];
                break;  
            }}}}

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
        scanf("%d", &arr[i]);}        
    findPrevGr(arr, n, result);    
    for (int i = 0; i < n; i++) {
        printf("%d", result[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("\n");       
    return 0;
}