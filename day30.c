//Q59: Count even and odd numbers in an array.

#include <stdio.h>
int main(){  
    int n, i, evenCt = 0, oddCt = 0;  
    printf("Enter number of elements: ");  
    scanf("%d", &n);  
    int arr[n];  
    printf("Enter %d elements:\n", n);  
    for(i = 0; i < n; i++)  
    {  
        scanf("%d", &arr[i]);  
        if(arr[i] % 2 == 0)  
            evenCt++;  
        else  
            oddCt++;  
    }  
    printf("Even numbers count: %d\n", evenCt);  
    printf("Odd numbers count: %d\n", oddCt);  
    return 0;  
}