#include <stdio.h>

int main() {
    int n, cnt = 0;
    scanf("%d", &n);

    while (1) {
        if (n % 2 == 0) {
            n = n / 2;
            cnt++;
        }
        else if(n!=1 && n%2!=0) {
            n = (n * 3) + 1;
            cnt++;
        }

        if (n == 1) {
            break;
        }
    }
    printf("%d\n", cnt);

    return 0;
}