#include <stdio.h>

int main() {
    char c[3];
    int arr[3], A = 0, B = 0, C = 0, D = 0;

    for (int i = 0; i < 3; i++) {
        scanf(" %c", &c[i]);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 3; i++) {
        if (c[i] == 'Y' && arr[i] >= 37) {
            A++;
        } else if (c[i] == 'N' && arr[i] >= 37) {
            B++;
        } else if (c[i] == 'Y' && arr[i] < 37) {
            C++;
        } else {
            D++;
        }
    }

    printf("%d %d %d %d ", A, B, C, D);

    if (A >= 2) {
        printf("E");
    }

    return 0;
}
