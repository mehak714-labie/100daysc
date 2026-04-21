//Q138: Print all enum names and integer values using a loop.

#include <stdio.h>
enum TrafficLight {
    RED,
    YELLOW,
    GREEN,
    L_COUNT
};
int main() {
    for (int i = 0; i < L_COUNT; i++) {
        switch (i) {
            case RED:
                printf("RED=%d\n", RED);
                break;
            case YELLOW:
                printf("YELLOW=%d\n", YELLOW);
                break;
            case GREEN:
                printf("GREEN=%d\n", GREEN);
                break;
        }    }    return 0;}
