#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(j >= i) {
                if(j%2!=0 || i==0) {
                    printf("* ");
                } else {
                    printf("  ");
                }
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
