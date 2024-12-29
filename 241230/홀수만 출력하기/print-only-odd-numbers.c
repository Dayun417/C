#include <stdio.h>

int main() {
    int a, n, i;
    scanf("%d", &n);

    for(i=0;i<n;i++) {
        scanf("%d", &a);
        if(a%2!=0 && a%3==0) {
            printf("%d\n", a);
        }
    }
    
    return 0;
}