//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

#include <stdio.h>
#include <string.h>
int main() {
    char s[1000];
    printf("Enter string: ");
    scanf("%s", s);
    int n = strlen(s);
    int lastIndex[256]; 
    for (int i = 0; i < 256; i++)
        lastIndex[i] = -1;
    int maxLen = 0;
    int start = 0; 
    for (int end = 0; end < n; end++) {
        char ch = s[end];
        if (lastIndex[(int)ch] >= start)
            start = lastIndex[(int)ch] + 1;
        lastIndex[(int)ch] = end;
        if (end - start + 1 > maxLen)
            maxLen = end - start + 1;
    }
    printf("Length of longest substring without repeating characters = %d", maxLen);

    return 0;
}

