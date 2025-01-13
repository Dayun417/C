#include <stdio.h>

int main() {
    int arr[100], sum=0;

    for(int i=0;i<100;i++) {
        scanf("%d ", &arr[i]);
        if(arr[i]==0) {
            printf("%d", arr[i-3]+arr[i-2]+arr[i-1]);
            break;
        }
    }

    return 0;
}