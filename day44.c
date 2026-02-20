//Q87: Count spaces, digits, and special characters in a string.
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int spaces = 0, digits = 0, special = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else if (str[i] == ' ') {
            spaces++;
        } else if ((str[i] >= '!' && str[i] <= '/') || (str[i] >= ':' && str[i] <= '@') ||
                   (str[i] >= '[' && str[i] <= '`') || (str[i] >= '{' && str[i] <= '~')) {
            special++;
        }
    }
    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);
    return 0;

}