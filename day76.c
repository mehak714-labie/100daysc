//Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.

#include <stdio.h>
int main() {
    char filename[100];
    FILE *fp;
    char ch;
    printf("Enter the filename: ");
    scanf("%s", filename);    
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: File '%s' not found or cannot be opened.\n", filename);
    } else {
        printf("\nContents of '%s':\n\n", filename);
        while ((ch = fgetc(fp)) != EOF) {
            putchar(ch);
        }        
        fclose(fp);    }
    return 0;
}
