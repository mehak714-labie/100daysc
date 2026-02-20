//Q89: Count frequency of a given character in a string.


#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    char ch;

    int count = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Enter a character to find its frequency: ");
    scanf(" %c", &ch);
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == ch){
            count++;
        }
    }
    printf("Frequency of '%c' in \"%s\" is: %d\n", ch, str, count);
    return 0;

}