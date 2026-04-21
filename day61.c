//Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

#include <stdio.h>
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
    int q[n], fr = 0, r = -1;
    for (int i = 0; i < k; i++) {
        if (arr[i] < 0)
            q[++r] = i;     }
    for (int i = k; i < n; i++) {
        if (fr <= r )
            printf("%d ", arr[q[fr]]);
        else
            printf("0 ");
        while (fr <= r && q[fr] <= i - k)
            fr++;
        if (arr[i] < 0)
            q[++r] = i;      }
    if (fr <= r)
        printf("%d", arr[q[fr]]);
    else
        printf("0");
    return 0;    }