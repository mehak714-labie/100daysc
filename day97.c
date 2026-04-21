//Q147: Store employee data in a binary file using fwrite() and read using fread().


#include <stdio.h>
struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee emp_write, emp_read;
    FILE *fp;

    printf("Enter Employee Name: ");
    scanf("%s", emp_write.name);

    printf("Enter Employee ID: ");
    scanf("%d", &emp_write.id);

    printf("Enter Employee Salary: ");
    scanf("%f", &emp_write.salary);

    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fwrite(&emp_write, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\nData successfully written to file.\n");

    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fread(&emp_read, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\n--- Employee Details Read from File ---\n");
    printf("Name   : %s\n", emp_read.name);
    printf("ID     : %d\n", emp_read.id);
    printf("Salary : %.2f\n", emp_read.salary);

    return 0;
}
