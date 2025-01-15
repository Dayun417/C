#include <stdio.h>

int main() {
    int arr[100], count=0;

    for(int i=0;i<100;i++) {
        scanf("%d ", &arr[i]);
        if(arr[i]==0) {
            break;
        }
        count++;
    }

    for(int i=1;i<10;i++) {
        int cnt=0;
        for(int j=0;j<count;j++) {
            if((arr[j]/10)==i)
                cnt++;
        }
        printf("%d - %d\n", i, cnt);
    }

    return 0;
}