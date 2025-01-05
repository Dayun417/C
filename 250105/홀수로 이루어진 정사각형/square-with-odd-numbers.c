#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i=0; i<2*n; i+=2) {
        for(int j=11;j<10+2*n; j+=2) {
            if(j%2!=0) {
                printf("%d ", i+j);
            }
        }
        printf("\n");
    }

    return 0;
}