#include <stdio.h>

int main() {
    int n, i=1, x = 0;
    scanf("%d", &n);

    while (1) {
        i *= 2;
        x++;
        if (i == n) {
            break;
        }
    }
    printf("%d", x);

    return 0;
}