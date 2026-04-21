//Q113: Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.

#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);     }
int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter k: ");
    scanf("%d", &k);
    if (k < 1 || k > n) {
        printf("Invalid k");
        return 0;    }
    qsort(arr, n, sizeof(int), cmp);
    printf("The %dth smallest element is %d", k, arr[k - 1]);
    return 0;    }

