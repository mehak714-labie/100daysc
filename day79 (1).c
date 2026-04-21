//Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

#include <stdio.h>
int main() {
    FILE *fp;
    int num, count = 0;
    int sum = 0;
    float av;
    fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return 1;    }
    while (fscanf(fp, "%d", &num) != EOF) {
        sum += num;
        count++;    }
    fclose(fp);
    if (count > 0) {
        av = (float)sum / count;
        printf("Sum = %d\n", sum);
        printf("Average = %.2f\n", av);
    } else {
        printf("No numbers found in the file.\n");      }
    return 0;   }

