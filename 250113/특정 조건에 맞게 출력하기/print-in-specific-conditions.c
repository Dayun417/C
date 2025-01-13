#include <stdio.h>

int main() {
    int arr[100];

    for(int i=0;i<11;i++) {
        scanf("%d ", &arr[i]);
        if(arr[i]==0) {
            break;
        }
    }

    for(int i=0;i<10;i++) {
        if(arr[i]%2==0) {
            arr[i]=arr[i]/2;
            printf("%d ", arr[i]);
        } else {
            arr[i]=arr[i]+3;
            printf("%d ", arr[i]);
        }
    }

    return 0;
}