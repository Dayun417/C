#include <stdio.h>

int main() {
    double arr[8], sum=0, avg;
    int cnt=0;

    for(int i=0;i<8;i++) {
        scanf("%lf ", &arr[i]);
        sum+=arr[i];
        cnt++;
    }
    avg = sum / cnt;
    printf("%.1lf", avg);

    return 0;
}