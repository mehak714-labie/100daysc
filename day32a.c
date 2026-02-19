//Q64: Find the digit that occurs the most times in an integer number.
#include <stdio.h>
int main() {
    long long num;
    int count[10] = {0};
    int i, digit, maxCount = 0, resultDigit = 0;

    printf("Enter an integer number: ");
    scanf("%lld", &num);
    while(num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    for(i = 0; i < 10; i++) {
        if(count[i] > maxCount) {
            maxCount = count[i];
            resultDigit = i;
        }
    }

    printf("Digit that occurs the most times: %d\n", resultDigit);

    return 0;
}
