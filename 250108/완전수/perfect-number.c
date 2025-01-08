#include <stdio.h>

int main() {
    int start, end, cnt=0;
    scanf("%d %d", &start, &end);

    for(int i=start;i<end;i++) {
        int sum=0;
        for(int n=1;n<i;n++) {
            if(i%n==0) {
                sum+=n;
            }
        }
        if(sum==i) {
            cnt++;
        }
    }
    printf("%d", cnt);

    return 0;
}