//Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

#include <stdio.h>
int main() {
    char fn[100];
    char t[200];     // to hold the new line of text
    FILE *fp;
    printf("Enter the filename: ");
    scanf("%s", fn);
    fp = fopen(fn, "a");
    if (fp == NULL) {
        printf("Error: File '%s' could not be opened.\n", fn);
        return 1;       }
    getchar();
    printf("Enter a new line of text to append: ");
    fgets(t, sizeof(t), stdin);
    fputs(t, fp);
    printf("Text successfully appended to '%s'.\n", fn);
    fclose(fp);
    return 0;
}
