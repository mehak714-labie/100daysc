//Q67: Insert an element in an array at a given position.
#include <stdio.h>
int main() {
    int n, i, pos, element;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n + 1]; 
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to insert the new element (0 to %d): ", n);
    scanf("%d", &pos);
    printf("Enter the element to insert: ");
    scanf("%d", &element);

    for(i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = element;

    printf("Array after insertion:\n");
    for(i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
