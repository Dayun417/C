#include <stdio.h>

int main() {
    int n, arr[4], sum=0, pass_val=0;
    double avg;

    scanf("%d", &n);

    for(int i=0;i<n;i++) {
        for(int j=0;j<4;j++) {
            scanf("%d ", &arr[j]);
            sum+=arr[j];
        }
        avg = (double)sum/4;
        if(avg>=60) {
            printf("pass\n");
            pass_val++;
        } else {
            printf("fail\n");
        }
        sum=0;
        avg=1;
    }
    printf("%d", pass_val);

    return 0;
}