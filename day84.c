//Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

#include <stdio.h>
enum Status {
    Success,
    Failure,
    Timeout     };
int main() {
    enum Status s = Timeout;   
    switch (s) {
        case Success:
            printf("Operation completed successfully.\n");
            break;
        case Failure:
            printf("Operation failed.\n");
            break;
        case Timeout:
            printf("Operation timed out.\n");
            break;
    }    return 0;
}

