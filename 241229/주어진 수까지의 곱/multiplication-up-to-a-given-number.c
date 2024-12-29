#include <stdio.h>

int main() {
    int a, b, i, prod=1;
    scanf("%d %d", &a, &b);
    
    for(i=a;i<=b;i++) {
        prod*=i;
    }

    printf("%d", prod);

    return 0;
}