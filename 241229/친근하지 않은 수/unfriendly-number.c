#include <stdio.h>

int main() {
    int n, i, cnt=0;
    scanf("%d", &n);

    for(i=1;i<=n;i++) {
        if(i%2==0 || i%3==0 || i%5==0) {
            continue;
        } else {
            cnt++;
        }
    }
    printf("%d", cnt);

    return 0;
}