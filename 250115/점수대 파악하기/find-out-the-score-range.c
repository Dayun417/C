#include <stdio.h>

int main() {
    int arr[100], cnt[11]={0,};

    for(int i=0;i<=100;i+=10) {
        scanf("%d ", &arr[i]);

        if(arr[i]==0) {
            break;
        }

        cnt[arr[i]/10]++;
    }

    for(int i=10;i>0;i--) {
        printf("%d - %d\n", i*10, cnt[i]);
    }

    return 0;
}