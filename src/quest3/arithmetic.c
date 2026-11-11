#include <stdio.h>

int main(void)
{
    int a, b, c;

    if (scanf("%d %d", &a, &b) != 2) {
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

    printf("%d %d %d ", a + b, a - b, a * b);

    if (b == 0) {
        printf("n/a");
    } else {
        printf("%d", a / b);
    }

    return 0;
}
