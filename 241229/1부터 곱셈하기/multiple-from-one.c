#include <stdio.h>

int main() {
    int n, i, prod=1;
    scanf("%d", &n);

    for(i=1;i<=10;i++) {
        prod*=i;
        if(prod>=n) {
            break;
        }
    }

    printf("%d", i);

    return 0;
}