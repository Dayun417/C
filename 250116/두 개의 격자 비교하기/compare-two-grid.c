#include <stdio.h>

int main() {
    int n, m, arr[10][10], arr2[10][10];
    scanf("%d %d", &n, &m);

    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            scanf("%d", &arr2[i][j]);
        }
    }

    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(arr[i][j]==arr2[i][j]) {
                printf("0 ");
            } else {
                printf("1 ");
            }
        }
        printf("\n");
    }

    return 0;
}