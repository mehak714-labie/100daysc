//Q131: Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.

#include <stdio.h>
enum Days {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    DAYS_COUNT     };
int main() {
    const char *dayNames[] = {
        "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY",
        "THURSDAY", "FRIDAY", "SATURDAY"         };
    for (int i = 0; i < DAYS_COUNT; i++) {
        printf("%s = %d\n", dayNames[i], i);
    }    return 0;    }

