//Q69: Find the second largest element in an array.
//Q69: Find the second largest element in an array.

#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    int second = -2147483648;  

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    if (second == -2147483648) {
        printf("There is no second largest element (all elements may be equal).\n");
    } else {
        printf("Second largest element = %d\n", second);
    }

    return 0;
}

