//Q83: Count vowels and consonants in a string.
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("enter a string:");
    scanf("%s", str);
    
    int vow = 0, cons = 0;
    for (int i = 0; i < strlen(str); i++) {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vow++;
        } else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            cons++;
        }
    }
    
    printf("Vowels=%d, Consonants=%d\n", vow, cons);
    return 0;
}

