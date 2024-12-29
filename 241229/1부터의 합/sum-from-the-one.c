#include <stdio.h>

int main() {
    int n, i, sum = 0;
    scanf("%d", &n);

    for (i = 1; i <= 100; i++) {
        sum += i;
        if (sum >= n) {
            break;
        }
    }

    printf("%d", i);

    return 0;
}