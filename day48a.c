//Q96: Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>
void reverse(char *start, char *end){
    while(start < end){
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
int main(){
    char sen[200];
    printf("Enter a sentence: ");
    scanf(" %[^\n]s", sen);
    char *word_start = sen;
    char *temp = sen;
    while(*temp){
        if(*temp == ' '){
            reverse(word_start, temp - 1);
            word_start = temp + 1;
        }
        temp++;
    }
    reverse(word_start, temp - 1); // Reverse the last word
    printf("Reversed sentence: %s\n", sen);
    return 0;
}
