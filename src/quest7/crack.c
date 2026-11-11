#include <stdio.h>

int main(void)
{
    double x, y;
    int c;

    if (scanf("%lf %lf", &x, &y) != 2) {
        printf("n/a");
        return 0;
    }

    c = getchar();
    while (c == ' ' || c == '\t' || c == '\r') {
        c = getchar();
    }
    if (c != '\n' && c != EOF) {
        printf("n/a");
        return 0;
    }

    if (x * x + y * y < 25) {
        printf("GOTCHA");
    } else {
        printf("MISS");
    }

    return 0;
}
