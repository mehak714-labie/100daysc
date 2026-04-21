//Q142: Store details of 5 students in an array of structures and print all.

#include <stdio.h>
struct Student {
    char name[50];
    int roll_no;
    float marks;
};
void printStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %.2f\n", s.name, s.roll_no, s.marks);
}
int main() {
    struct Student students[5];
    for(int i = 0; i < 5; i++) {
        printf("Enter details for student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll number: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
    printf("\nDetails of all students:\n");
    for(int i = 0; i < 5; i++) {
        printStudent(students[i]);
    }
    return 0;
}

