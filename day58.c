//Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
#include <stdio.h>
#include <stdlib.h>

int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int* answer = (int*)malloc(numsSize * sizeof(int));
    *returnSize = numsSize;
        for (int i = 0; i < numsSize; i++) {
        answer[i] = 1;
    }
    int left = 1;
    for (int i = 0; i < numsSize; i++) {
        answer[i] = left;
        left *= nums[i];
    }    
    int right = 1;
    for (int i = numsSize - 1; i >= 0; i--) {
        answer[i] *= right;
        right *= nums[i];
    }    
    return answer;   }
int main() {
     int n;
    printf("\nEnter the size of your array (or 0 to exit): ");
    scanf("%d", &n);
    
    if (n > 0) {
        int* nums = (int*)malloc(n * sizeof(int));
        printf("Enter %d numbers separated by spaces: ", n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &nums[i]);
        }    
        int returnSize;
        int* result = productExceptSelf(nums, n, &returnSize);
        printf("Output:\n[");
        for (int i = 0; i < returnSize; i++) {
            printf("%d", result[i]);
            if (i < returnSize - 1) printf(",");
        }
        printf("]\n");
        
        free(result);
        free(nums);
    }
    
    return 0;
}