//Q91: Remove all vowels from a string.

#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    char result[100];
    int i, j = 0;
    const char *vowels = "aeiouAEIOU";

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove newline character if present

    for(i = 0; str[i] != '\0'; i++) {
        if(!strchr(vowels, str[i])) {
            result[j++] = str[i];
        }
    }
    result[j] = '\0'; // Null-terminate the result string

    printf("String after removing vowels: %s\n", result);

    return 0;
}
