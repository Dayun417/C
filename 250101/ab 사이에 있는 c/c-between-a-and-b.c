#include <stdio.h>
#include <stdbool.h>

int main() {
    int a, b, c;
    bool satisfied = false;
    scanf("%d %d %d", &a, &b, &c);

    for(int i=a;i<=b;i++) {
        if(i%c==0) {
            satisfied = true;
        }
    }

    if(satisfied==true) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }

    return 0;
}