#include <stdio.h>

int main() {
    int arr[10], sum=0, sum2=0, val=0;

    for(int i=0;i<10;i++) {
        scanf("%d ", &arr[i]);
    }

    for(int i=0;i<10;i++) {
        if(i%2==0) {
            sum+=arr[i];
        } else {
            sum2+=arr[i];
        }
    }
    
    if(sum>sum2) {
        val=sum-sum2;
    } else {
        val=sum2-sum;
    }
    
    printf("%d", val);

    return 0;
}