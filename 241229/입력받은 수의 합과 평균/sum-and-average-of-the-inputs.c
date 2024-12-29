#include <stdio.h>

int main() {
    int n, a, i, sum = 0, cnt = 0;
    double avg = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a);
        sum += a;
        cnt++;
    }

    avg = (double)sum / cnt;

    printf("%d %.1lf", sum, avg);

    return 0;
}