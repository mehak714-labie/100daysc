//Q120: Write a program to take a string input. Change it to sentence case.
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int n = strlen(str);
    int capitalize = 1; 
    for (int i = 0; i < n; i++) {
        if (isalpha(str[i])) {
            if (capitalize) {
                str[i] = toupper(str[i]);
                capitalize = 0;
            } else {
                str[i] = tolower(str[i]);
            }        }
        if (str[i] == '.' || str[i] == '!' || str[i] == '?') {
            capitalize = 1;
        }    }
    printf("Sentence case: %s", str);
    return 0;
}

