#include <stdio.h>

int max(int a, int b);

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

    printf("%d", max(a, b));
    return 0;
}

int max(int a, int b)
{
    return (a > b) ? a : b;
}
