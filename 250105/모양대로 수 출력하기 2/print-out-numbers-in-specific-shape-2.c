#include <stdio.h>

int main() {
    int n, cnt=1;
    scanf("%d", &n);

    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            printf("%d ", cnt*2);
            cnt++;
            if(cnt==5) {
                cnt=1;
            }
        }
        printf("\n");
    }

    return 0;
}