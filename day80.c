//Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
#include <stdio.h>
#include <stdlib.h>
struct Student {
    char name[50];
    int roll;
    float marks;      };
int main() {
    FILE *fp;
    int n, i;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student s[n];
    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", s[i].name); 
        printf("Roll Number: ");
        scanf("%d", &s[i].roll);
        printf("Marks: ");
        scanf("%f", &s[i].marks);   }
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;        }
    for (i = 0; i < n; i++) {
        fprintf(fp, "%s %d %.2f\n", s[i].name, s[i].roll, s[i].marks);
    }
    fclose(fp);
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;        }
    printf("\nStudent Records:\n");
    while (fscanf(fp, "%s %d %f", s[i].name, &s[i].roll, &s[i].marks) != EOF) {
        printf("Name: %s\n", s[i].name);
        printf("Roll Number: %d\n", s[i].roll);
        printf("Marks: %.2f\n", s[i].marks);    }
    fclose(fp);
    return 0;     }

