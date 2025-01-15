#include <stdio.h>

int main() {
    int n, arr[100], cnt=0;
    int max=0, max2=0;
    scanf("%d", &n);

    for(int i=0;i<n;i++) {
        scanf("%d ", &arr[i]);
        cnt++;
    }

    for(int i=0;i<cnt;i++) {
        if(arr[i]>max) {
            max=arr[i];
        }
    }

    for(int i=0;i<cnt;i++) {
        if(arr[i]>max2) {
            max2=arr[i];
        } else if(max==max2) {
            max2 = max;
        }
    }

    printf("%d %d", max, max2);

    return 0;
}