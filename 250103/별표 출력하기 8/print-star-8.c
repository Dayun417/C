#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        if (i % 2 != 0) {
            for (int j = 0; j < i + 1; j++) {
                printf("* ");
            }
        }
        else {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}