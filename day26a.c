/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*    */

#include <stdio.h>

int main() {
    for (int group = 1; group <= 5; group++) {
        if (group == 1) {           
            printf("*\n");
        }
        else if (group == 2) {      
            printf("*\n*\n");
        }
        else if (group == 3) {      
            printf("*\n*\n*\n*\n");
        }
        else if (group == 4) {      
            printf("*\n*\n*\n");
        }
        else if (group == 5) {      
            printf("*\n");
        }
        printf("\n"); 
    }
    return 0;
}
