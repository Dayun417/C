#include <stdio.h>

int main() {
    int n, cnt=1;
    scanf("%d", &n);

    for(int i=0;i<n;i++) {
        if(i%2==0) {
            for(int j=0;j<n;j++) {
                printf("%d ", cnt);
                cnt++;
            }
            cnt+=2;
        } else {
            for(int j=0;j<n;j++) {
                printf("%d ", cnt);
                cnt+=2;
            }
        }
        printf("\n");
        cnt--;
    }

    return 0;
}