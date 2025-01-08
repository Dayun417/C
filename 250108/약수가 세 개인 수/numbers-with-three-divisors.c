#include <stdio.h>

int main() {
    int start, end, add_cnt=0;
    scanf("%d %d", &start, &end);

    for(int i=start;i<=end;i++) {
        int cnt=0;
        for(int n=1;n<=i;n++) {
            if(i%n==0) {
                cnt++;
            }
        }
        if(cnt==3) {
            add_cnt++;
        }
    }
    printf("%d", add_cnt);

    return 0;
}