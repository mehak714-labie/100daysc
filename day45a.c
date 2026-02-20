//Q90: Toggle case of each character in a string.
#include <stdio.h>
#include <string.h>
int main(){
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - ('a' - 'A'); // Convert to uppercase
        } else if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] + ('a' - 'A'); // Convert to lowercase
        }
    }

    printf("Toggled case string: %s\n", str);
    return 0;
}
