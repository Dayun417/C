#include <stdio.h>

int main() {
    int a, b, arr[10];
    scanf("%d %d", &a, &b);

    arr[0] = a;
    arr[1] = b;

    printf("%d %d ", arr[0], arr[1]);

    for(int i=2;i<10;i++) {
        arr[i]=arr[i-1]+(2*arr[i-2]);
    }

    for(int i=2;i<10;i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}