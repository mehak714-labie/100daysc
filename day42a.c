//Q84: Convert a lowercase string to uppercase without using built-in functions.
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    scanf("%s", str);
    
    for (int i = 0; i < strlen(str); i++) {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            str[i] = ch - ('a' - 'A');
        }
    }
    
    printf("%s\n", str);
    return 0;
}
