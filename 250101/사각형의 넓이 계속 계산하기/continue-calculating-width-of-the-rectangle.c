#include <stdio.h>

int main() {
    int a, b, result=a*b;
    char c;

    while(1) {
        scanf("%d %d %c", &a, &b, &c);
        if(c==0) {
            printf("%d", result);
            break;
        } else {
            printf("%d", result);
        }
    }

    return 0;
}