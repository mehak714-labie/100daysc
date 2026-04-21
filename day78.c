//Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *fp;
    char ch;
    int v= 0, con = 0;
    fp = fopen("input.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;    }
    while ((ch = fgetc(fp)) != EOF) {
        if (isalpha(ch)) { 
            ch = tolower(ch); 
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                v++;
            else
                con++;    }     }
    fclose(fp);
    printf("Vowels: %d\n", v);
    printf("Consonants: %d\n", con);
    return 0;      }    

