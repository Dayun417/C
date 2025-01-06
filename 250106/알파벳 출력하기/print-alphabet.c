#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    char cnt = 'A';

    for(int i=0;i<n;i++) {
        for(int j=0;j<=i;j++) {
            printf("%c", cnt);
            cnt++;
            if(cnt=='Z'+1) {
                cnt='A';
            }
        }
        printf("\n");
    }

    return 0;
}