#include <stdio.h>

int main() {
    int n, i, cnt = 0;
    scanf("%d", &n);

    for (i = 1; i++;) {
        if (n / i > 1) {
            n /= i;
            cnt++;
        }
        if (n / i <= 1) {
            break;
        }
    }
    cnt++;
    printf("%d", cnt);

    return 0;
}