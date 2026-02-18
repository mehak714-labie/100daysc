//Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>
double sumOfSeries(int n) {
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        int nr = 2 * (i + 1);       // Even nums: 2, 4, 6, ...
        int dr = 4 * i + 3;       // Denominators: 3, 7, 11, 15, ...
        sum += (double)nr / dr;
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
