#include <stdio.h>

int main() {
    int n, cnt=0;
    scanf("%d", &n);
    double arr[100], sum=0, avg;

    for(int i=0;i<n;i++) {
        scanf("%lf ", &arr[i]);
        sum+=arr[i];
        cnt++;
    }
    avg = sum/cnt;
    printf("%.1lf\n", avg);

    if(avg>=4.0) {
        printf("Perfect");
    } else if(avg>=3.0) {
        printf("Good");
    } else {
        printf("Poor");
    }
    
    return 0;
}