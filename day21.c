//Q41: Write a program to swap the first and last digit of a number.
#include <stdio.h>
int swapFirstAndLastDigit(int num) {
    int original = num;
    int lastDig = num % 10;
    int firstDig, digits = 0;
    int temp = num;
    while (temp >= 10) {
        temp /= 10;
        digits++;
    }
    firstDig = temp;
    if (digits == 0) {
        return num;
    }
    int multip = 1;
    for (int i = 0; i < digits; i++) {
        multip *= 10;
    }

    num = num - firstDig * multip - lastDig;

    // Add swapped digits back to their new positions
    num += lastDig * multip + firstDig;

    return num;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int swappedNo = swapFirstAndLastDigit(num);
    printf("Number after swapping first and last digits: %d\n", swappedNo);

    return 0;
}
       