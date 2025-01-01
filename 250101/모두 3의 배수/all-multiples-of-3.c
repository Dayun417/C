#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, i;
    bool satisfied = true;

    for(i=0;i<5;i++) {
        scanf("%d", &n);
        if(n%3!=0) {
            satisfied = false;
        }
    }

    if(satisfied == false) {
        printf("0\n");
    } else {
        printf("1\n");
    }

    return 0;
}