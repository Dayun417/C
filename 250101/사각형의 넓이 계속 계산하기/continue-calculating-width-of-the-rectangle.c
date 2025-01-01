#include <stdio.h>

int main() {
    int a, b;
    char c;

    while (1) {
        scanf("%d %d %c", &a, &b, &c);
        int result = a * b;
        
        if (c == 'C') {
            printf("%d\n", result);
            break;
        }
        else {
            printf("%d\n", result);
        }
    }

    return 0;
}