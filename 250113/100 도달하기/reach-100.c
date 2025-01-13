#include <stdio.h>

int main() {
    int n, arr[100];
    scanf("%d", &n);

    arr[0] = 1;
    arr[1] = n;

    printf("%d %d ", arr[0], arr[1]);

    for(int i=2;i<100;i++) {
        arr[i] = arr[i-1]+arr[i-2];
        printf("%d ", arr[i]);
        if(arr[i]>100) {
            break;
        }
    }

    return 0;
}