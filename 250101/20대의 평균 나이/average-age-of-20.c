#include <stdio.h>

int main() {
    int n, cnt=0, sum=0;
    double avg=0;

    while(1) {
        scanf("%d", &n);
        if(n<=19 || n>=30) {
            break;
        }
        sum+=n;
        cnt++;
    }
    avg = (double)sum/cnt;
    printf("%.2lf", avg);

    return 0;
}