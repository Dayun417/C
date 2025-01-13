#include <stdio.h>

int main() {
    int n, cnt=0, arr[100];
    scanf("%d", &n);

    arr[0] = n;
    printf("%d ", arr[0]);

    if(arr[0]%5==0)
        cnt++;

    for(int i=1;i<=100;i++) {
        arr[i] = arr[0] + arr[i-1];
        printf("%d ", arr[i]);

        if(arr[i]%5==0) {
            cnt++;
        }
        if(cnt==2) {
            break;
        }
    }

    return 0;
}