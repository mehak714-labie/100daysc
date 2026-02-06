//Q150 Use pointer to struct to modify and display data using -> operator.
#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    float marks;
};
int main() {
    struct Student s;
    struct Student *ptr;
    ptr = &s;
    printf("Enter Student Name: ");
    scanf("%s", ptr->name);
    printf("Enter Roll Number: ");
    scanf("%d", &ptr->roll);
    printf("Enter Marks: ");
    scanf("%f", &ptr->marks);
    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", ptr->name);
    printf("Roll: %d\n", ptr->roll);
    printf("Marks: %.2f\n", ptr->marks);
    return 0;
}
