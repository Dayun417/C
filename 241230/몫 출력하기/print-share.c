#include <stdio.h>

int main() {
    int n, i, c, cnt=0;

    while(1) {
        scanf("%d", &n);
        if(n%2==0) {
            c = n/2;
            printf("%d\n", c);
            cnt++;
        } else {
            continue;
        }
        if(cnt==3) {
            break;
        }
    }

    return 0;
}