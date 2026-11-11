#include <stdio.h>

#define EPSILON 1E-6

int main(void)
{
    double a = 0.1 + 0.2;
    double b = 0.3;
    double diff = a - b;

    if (diff < 0) {
        diff = -diff;
    }

    if (diff < EPSILON) {
        printf("OK!");
    } else {
        printf("NOT OK");
    }

    return 0;
}
