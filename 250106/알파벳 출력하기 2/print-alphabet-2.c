#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    char cnt='A';

    for(int i=0;i<n;i++) {
        for(int j=0;j<2*i;j++) {
            printf(" ");
        }
        for(int j=0;j<n-i;j++) {
            printf("%c ", cnt);
            cnt++;
            if(cnt=='Z'+1) {
                cnt='A';
            }
        }
        printf("\n");
    }

    return 0;
}