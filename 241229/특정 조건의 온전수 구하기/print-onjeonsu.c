#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);

    for(i=1;i<=n;i++) {
        if(i%2==0 || i%5==0 || i%3==0 && i%9!=0) {
            continue;
        } else {
            printf("%d ", i);
        }
    }

    return 0;
}