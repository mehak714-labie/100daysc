//Q97: Print the initials of a name.

#include <stdio.h>
#include <string.h>
int main(){
    char name[100];
    printf("Enter a name: ");
    scanf(" %[^\n]s", name);
    int len = strlen(name);
    for(int i = 0; i < len; i++){
        if(i == 0 || name[i-1] == ' '){
            printf("%c.", name[i]);
        }
    }
    printf("\n");
    return 0;
}
