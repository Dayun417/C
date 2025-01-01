#include <stdio.h>
#include <stdbool.h>

int main() {
    int a, b, c;
    bool satified = true;

    scanf("%d %d %d", &a, &b, &c);

    for(int i=a;i<=b;i++) {
        if(i%c!=0) {
            satified = false;
        }
    }
    if(satified==true) {
        printf("NO\n");
    } else {
        printf("YES\n");
    }

    return 0;
}