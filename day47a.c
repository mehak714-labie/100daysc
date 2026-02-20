//Q94: Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>
int main(){
    char sen[200];
    printf("Enter a sentence: ");
    scanf(" %[^\n]s", sen);
    char *token = strtok(sen, " ");
    char longest[100] = "";
    while(token != NULL){
        if(strlen(token) > strlen(longest)){
            strcpy(longest, token);
        }
        token = strtok(NULL, " ");
    }
    printf("Longest word: %s\n", longest);
    return 0;
}
