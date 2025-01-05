#include <stdio.h>

int main() {
    int n, cnt = 1;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", cnt);
            if (i % 2 == 0) {
                cnt++;
            } else {
                cnt--;
            }
        }
        printf("\n");
        if (i % 2 == 0) {
            cnt += n - 1;
        } else {
            cnt += n + 1;
        }
    }

    return 0;
}
