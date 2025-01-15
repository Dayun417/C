#include <stdio.h>
#include <limits.h>

int main() {
    int arr[10];
    int max=0, min=INT_MAX;

    for(int i=0;i<10;i++) {
        scanf("%d ", &arr[i]);
    }

    for(int i=0;i<10;i++) {
        if(arr[i]>500) {
            continue;
        }else if(arr[i]>max) {
            max=arr[i];
        }
    }

    for(int i=0;i<10;i++) {
        if(arr[i]<500) {
            continue;
        }else if(arr[i]<min) {
            min=arr[i];
        }
    }

    printf("%d %d", max, min);

    return 0;
}