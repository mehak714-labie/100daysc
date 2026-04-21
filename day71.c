//Q121: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.

#include <stdio.h>
int main() {
    char name[100];
    int age;    
    FILE *file = fopen("info.txt", "w");    
    if (file == NULL) {
        printf("Error creating the file.\n");
        return 1;        }   
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';    
    printf("Enter your age: ");
    scanf("%d", &age);   
    fprintf(file, "Name: %s, Age: %d", name, age);
    fclose(file);
    printf("File created successfully! Data written to info.txt\n");    
    return 0;
}