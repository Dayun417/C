#include <stdio.h>
#include <limits.h>

int main() {
    int n, cnt=0;
    int arr[100];
    int max=INT_MIN, max2=INT_MIN, index;
    scanf("%d", &n);

    for(int i=0;i<n;i++) {
        scanf("%d ", &arr[i]);
        cnt++;
    }

    for(int i=0;i<cnt;i++) {
        if(arr[i]>=max) {
            max=arr[i];
            index=i;
        }
    }

    arr[index]=INT_MIN;

    for(int i=0;i<cnt;i++) {
        if(arr[i]>=max2) {
            max2=arr[i];
        }
    } 
    printf("%d %d", max, max2);

    return 0;
}