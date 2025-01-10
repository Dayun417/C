#include <stdio.h>

int main() {
    int arr[10], cnt=0, sum=0;

    for(int i=0;i<10;i++) {
        scanf("%d ", &arr[i]);
    }

    for(int i=0;i<10;i++) {
        if(arr[i]!=0) {
            if(arr[i]%2==0) {
                cnt++;
                sum+=arr[i];
            }
        } else {
            break;
        }
    }
    printf("%d %d", cnt, sum);

    return 0;
}