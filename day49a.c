//Q98: Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>
int main() {
   char name[100];
   printf("Enter a name: ");
    scanf(" %[^\n]s", name);
    int len = strlen(name);
    for(int i = 0; i < len; i++){
        if(i == 0 || name[i-1] == ' '){
            if(name[i+1] != '\0' && name[i+1] != ' '){
                printf("%c.", name[i]);
            } else {
                // Print the surname in full
                for(int j = i; j < len; j++){
                    printf("%c", name[j]);
                }
                break;
            }
        }
    }
    printf("\n");
    return 0;
}
