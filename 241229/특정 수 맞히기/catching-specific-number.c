#include <stdio.h>

int main() {
    int n, a=25;

    while(1) {
        scanf("%d", &n);
        if(n<a) {
            printf("Higher\n");
        } else if(n>a) {
            printf("Lower\n");
        } else if(n==a) {
            printf("Good\n");
            break;
        }
    }

    return 0;
}