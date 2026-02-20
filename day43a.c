//Q86: Check if a string is a palindrome.
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("enter a string:");
    scanf("%s", str);
    
    int len = strlen(str);
    int is_pm = 1;
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            is_pm = 0;
            break;
        }
    }
    
    if (is_pm) {
        printf("it is palindrome\n");
    } else {
        printf("it is not palindrome\n");
    }
    
    return 0;
}

