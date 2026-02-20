//Q93: Check if two strings are anagrams of each other.

#include <stdio.h>
#include <string.h>
int main(){
    char s1[100], s2[100];
    int freq[26] = {0};
    printf("Enter first string: ");
    scanf("%s", s1);
    printf("Enter second string: ");
    scanf("%s", s2);
    for(int i = 0; s1[i] != '\0'; i++){
        if(s1[i] >= 'a' && s1[i] <= 'z'){
            freq[s1[i] - 'a']++;
        }
    }
    for(int i = 0; s2[i] != '\0'; i++){
        if(s2[i] >= 'a' && s2[i] <= 'z'){
            freq[s2[i] - 'a']--;
        }
    }
    for(int i = 0; i < 26; i++){
        if(freq[i] != 0){
            printf("Not anagrams\n");
            return 0;
        }
    }
    printf("Anagrams\n");
    return 0;

}