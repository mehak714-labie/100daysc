//Q139 Show that enums store integers by printing assigned values.

#include <stdio.h>
enum TrafficLight {
    RED = 5,
    YELLOW = 10,
    GREEN = 15
};
int main() {
    enum TrafficLight light;
    light = RED;
    printf("RED = %d\n", light);
    light = YELLOW;
    printf("YELLOW = %d\n", light);
    light = GREEN;
    printf("GREEN = %d\n", light);
    return 0;
}

