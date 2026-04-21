//Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.

/*
Sample Test Cases:
Input 1:
Name: Asha
Roll: 101
Marks: 90
Output 1:
Name: Asha | Roll: 101 | Marks: 90

*/
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
    struct Student student;
    printf("Enter name: ");
    scanf("%s", student.name);
    printf("Enter roll number: ");
    scanf("%d", &student.roll_no);
    printf("Enter marks: ");
    scanf("%f", &student.marks);
    
    printStudent(student);
    return 0;
}
