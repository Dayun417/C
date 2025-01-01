#include <stdio.h>
#include <stdbool.h>
int main() {
    int n, i;
    bool satisfied = true;

    scanf("%d", &n);

    for (i = 3; i <= n; i++) {
        if (n % (i - 1) == 0) {
            satisfied = false;
        }
    }

    if (satisfied == false) {
        printf("C\n");
    }
    else {
        printf("P\n");
    }

    return 0;
}