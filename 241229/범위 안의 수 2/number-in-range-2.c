#include <stdio.h>

int main() {
    int n, i, sum = 0, cnt=0;
    double avg = 0;

    for (i = 0; i < 10; i++) {
        scanf("%d", &n);
        if (0 <= n && n <= 200) {
            sum += n;
            cnt++;
        }
    }

    avg = (double)sum / cnt;

    printf("%d %.1lf", sum, avg);

    return 0;
}