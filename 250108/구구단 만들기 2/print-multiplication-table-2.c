#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    for(int j=2;j<=8;j+=2) {
        for(int i=b;i>=a;i--) {
            printf("%d * %d = %d ", i, j, i*j);

            if(i>a) {
                printf("/ ");
            } else {
                printf("");
            }
        }
        printf("\n");
    }

    return 0;
}