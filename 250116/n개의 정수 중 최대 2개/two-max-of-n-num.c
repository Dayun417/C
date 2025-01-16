#include <stdio.h>
#include <limits.h>

int main() {
    int n, arr[100], cnt=0;
    int max=INT_MIN, max2=0, index;
    scanf("%d", &n);

    for(int i=0;i<n;i++) {
        scanf("%d ", &arr[i]);
        cnt++;
    }

    for(int i=0;i<cnt;i++) {
        if(arr[i]>max) {
            max=arr[i];
            index=i;
        }
    }

    arr[index]=0;
    
    for(int i=0;i<cnt;i++) {
        if(arr[i]>max2) {
            max2=arr[i];
        }
    } 
    printf("%d %d", max, max2);

    return 0;
}