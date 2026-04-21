//Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

#include <stdio.h>
enum Menu {
    Add = 1,
    Substract,
    Multiply        };
int main() {
    enum Menu choice;
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Menu:\n1. ADD\n2. SUBTRACT\n3. MULTIPLY\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice) {
        case Add:
            printf("Result: %d\n", a + b);
            break;
        case Substract:
            printf("Result: %d\n", a - b);
            break;
        case Multiply:
            printf("Result: %d\n", a * b);
            break;
        default:
            printf("Invalid choice!\n");
    }
    return 0;   }

