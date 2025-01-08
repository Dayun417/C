#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    for(int j=1;j<=9;j++) {
        for(int i=b;i>=a;i--) {
            if(i%2==0) {
                printf("%d * %d = %d ", i, j, i*j);
            }
            if(i%2==0 && i>a) {
                printf("/ ");
            } else {
                printf("");
            }
        }
        printf("\n");
    }

    return 0;
}