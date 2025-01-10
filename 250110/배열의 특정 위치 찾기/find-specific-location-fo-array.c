#include <stdio.h>

int main() {
    int arr[10], sum=0, cnt=0;
    double avg;

    for(int i=0;i<10;i++) {
        scanf("%d ", &arr[i]);
    }

    for(int i=1;i<=10;i+=2) {
        sum+=arr[i];
    }
    printf("%d ", sum);
    sum=0;

    for(int i=2;i<=10;i+=3) {
        sum+=arr[i];
        cnt++;
    }
    avg = (double)sum/cnt;
    printf("%.1lf", avg);

    return 0;
}