//Q122: Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.

#include <stdio.h>
int main() {
    FILE *fp;
    char l[200];  
    fp = fopen("info.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open file 'info.txt'.\n");
        return 1;    }
    printf("Contents of 'info.txt':\n\n");
    while (fgets(l, sizeof(l), fp) != NULL) {
        printf("%s", l);
    }   
    fclose(fp);
    printf("\n\neof reached.\n");
    return 0;              }
