#include <stdio.h>

int main() {
    for(int i=1;i<=19;i++) {
        for(int j=1;j<=19;j++) {
            printf("%d * %d = %d ", i, j, i*j);
            if(j%2==0) {
                printf("\n");
            } else if(j==19) {
                printf("");
            } else {
                printf("/ ");
            }
        }
        printf("\n");
    }

    return 0;
}