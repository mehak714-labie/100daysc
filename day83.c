//Q133: Create an enum for months and print how many days each month has.

#include <stdio.h>
enum Month {
    JANUARY,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER,
    MONTH_COUNT      };
int main() {
    const char *monthNames[] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"    };
    int daysInMonth[] = {
        31, 28, 31, 30,
        31, 30, 31, 31,
        30, 31, 30, 31    };
    for (int i = 0; i < MONTH_COUNT; i++) {
        printf("%s has %d days\n", monthNames[i], daysInMonth[i]);
    }    return 0;  }

