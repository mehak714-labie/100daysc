//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>
int main() {
    int n, i, target;

    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);
    int arr[n + 1]; // Extra space for the new element
    printf("Enter %d sorted elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &target);

    // Find the position to insert the new element
    int pos = n; // Default position is at the end
    for(i = 0; i < n; i++) {
        if(arr[i] > target) {
            pos = i;
            break;
        }
    }

    // Shift elements to the right to make space for the new element
    for(i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element
    arr[pos] = target;

    printf("Array after insertion:\n");
    for(i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
