//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>
double sumOfSeries(int n) {
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        int n = 2 * i + 1;   // Odd nums: 1, 3, 5, ...
        int d = 2 * i + 2; // Even nums: 2, 4, 6, ...
        sum += (double)n / d;
    }
    return sum;
}
int main() {
    int terms;
    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    double result = sumOfSeries(terms);
    printf("Sum of the series up to %d terms is: %.2f\n", terms, result);

    return 0;
}
