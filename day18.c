//Q35: Write a program to print all factors of a given number.

#include <stdio.h>  
void printFactors(int num) {
    printf("Factors of %d are: ", num);
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    printFactors(number);

    return 0;
}
