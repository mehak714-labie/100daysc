//Q140 Define a struct with enum Gender and print person's gender.

#include <stdio.h>
enum Gender {
    Male,
    Female,
    Other    };
struct Person {
    char name[50];
    int age;
    enum Gender g;     };
int main() {
    struct Person p1;
    printf("Enter name: ");
    scanf("%s", p1.name);
    printf("Enter age: ");
    scanf("%d", &p1.age);
    printf("Enter gender (0 = Male, 1 = Female, 2 = Other): ");
    scanf("%d", (int*)&p1.g); 
    printf("\nPerson Details:\n");
    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    printf("Gender: ");
    switch (p1.g) {
        case Male:
            printf("Male\n");
            break;
        case Female:
            printf("Female\n");
            break;
        case Other:
            printf("Other\n");
            break;
        default:
            printf("Invalid\n");
    }    return 0;     }