#include <stdio.h>
#include <math.h>

int main(void)
{
    double x, y;
    int c;

    if (scanf("%lf", &x) != 1) {
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

    if (x == 0) {
        printf("n/a");
        return 0;
    }

    y = 7e-3 * pow(x, 4)
        + ((22.8 * pow(x, 1.0 / 3) - 1e3) * x + 3) / (x * x / 2)
        - x * pow(10 + x, 2 / x)
        - 1.01;

    if (isnan(y) || isinf(y)) {
        printf("n/a");
        return 0;
    }

    printf("%.1f", y);
    return 0;
}
