//Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

#include <stdio.h>

void findFirstLast(int nums[], int n, int target) {
    int f= -1, la= -1;
    
    // Find first occurrence
    int lf = 0, rg = n - 1;
    while (lf <= rg) {
        int mid = lf + (rg - lf) / 2;
        if (nums[mid] == target) {
            f = mid;
            rg = mid - 1; // Continue searching left
        } else if (nums[mid] < target) {
            lf = mid + 1;
        } else {
            rg = mid - 1;
        }
    }
    
    // If target not found
    if (f == -1) {
        printf("-1,-1\n");
        return;
    }
    
    // Find last occurrence
    int lf = 0, rg = n - 1;
    while (lf <= rg) {
        int mid = lf + (rg - lf) / 2;
        if (nums[mid] == target) {
            la = mid;
            lf = mid + 1; // Continue searching right
        } else if (nums[mid] < target) {
            lf = mid + 1;
        } else {
            rg = mid - 1;
        }
    }
    
    printf("%d,%d\n", f, la);
}

int main() {
    int nums[] = {5,7,7,8,8,10};
    int n = sizeof(nums) / sizeof(nums[0]);
    
    // Test cases
    printf("Target 8: ");
    findFirstLast(nums, n, 8);  // Output: 3,4
    
    printf("Target 6: ");
    findFirstLast(nums, n, 6);  // Output: -1,-1
    
    printf("Target 10: ");
    findFirstLast(nums, n, 10); // Output: 5,5
    
    return 0;
}
