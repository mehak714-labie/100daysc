//Q40: Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>
void onesComplement(char binary[]) {
    printf("1's complement: ");
    for (int i = 0; binary[i] != '\0'; i++) {
        if (binary[i] == '0') {
            printf("1");
        } else if (binary[i] == '1') {
            printf("0");
        } else {
            printf("\nInvalid binary number.\n");
            return;
        }
    }
    printf("\n");
}
int main() {
    char binary[65]; 
    printf("Enter a binary number: ");
    scanf("%s", binary);

    onesComplement(binary);

    return 0;
}
