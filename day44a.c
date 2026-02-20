//Q88: Replace spaces with hyphens in a string.
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        if (str[i] == ' ') {
            str[i] = '-';
        }
    }

    printf("Modified string: %s", str);
    return 0;
}
