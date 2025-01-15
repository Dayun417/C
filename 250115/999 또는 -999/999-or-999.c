#include <stdio.h>
#include <limits.h>

int main() {
    int arr[100], cnt=0;
    int max=INT_MIN, min=INT_MAX;

    for(int i=0;i<100;i++) {
        scanf("%d ", &arr[i]);
        if(arr[i]==999 || arr[i]==-999) {
            break;
        }
        cnt++;
    }
    
    for(int i=0;i<cnt;i++) {
        if(arr[i]>max) {
            max=arr[i];
        }
        if(arr[i]<min) {
            min=arr[i];
        }
    }

    printf("%d %d", max, min);

    return 0;
}