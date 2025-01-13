#include <stdio.h>

int main() {
    int arr[100];

    for(int i=0;i<100;i++) {
        scanf("%d ", &arr[i]);
        if(arr[i]==0) {
            break;
        }
    }

    for(int i=0;i<100;i++) {
        if(arr[i]%2==0) {
            arr[i]/=2;
        } else {
            arr[i]+=3;
        }
        if(arr[i]==0) {
            break;
        }
        printf("%d ", arr[i]);
    }

    return 0;
}