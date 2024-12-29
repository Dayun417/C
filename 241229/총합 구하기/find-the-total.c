#include <stdio.h>

int main() {
    int a, b, i, sum=0;
    scanf("%d %d", &a, &b);

    for(i=a;i<=b;i++) {
        if(i%6==0 && i%8!=0) {
            sum+=i;
        }
    }

    printf("%d", sum);

    return 0;
}