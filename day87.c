//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

#include <stdio.h>
enum UserRole {
    Admin,
    User,
    Guest         };
int main() {
    enum UserRole role;
    printf("Enter role (0 = ADMIN, 1 = USER, 2 = GUEST): ");
    scanf("%d", &role);
    switch (role) {
        case Admin:
            printf("Welcome, Admin! You have full access.\n");
            break;
        case User:
            printf("Welcome, User! You have limited access.\n");
            break;
        case Guest:
            printf("Welcome, Guest! You have minimal access.\n");
            break;
        default:
            printf("Invalid role selected.\n");
    }
    return 0;
}

