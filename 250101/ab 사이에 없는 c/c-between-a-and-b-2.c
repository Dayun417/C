#include <stdio.h>
#include <stdboool.h>
int main() {
    int a, b, c;
    bool satified = true;

    scanf("%d %d %d", &a, &b, &c);
    
    for(int i=a;i<=b;i++) {
        if(i%c==0) {
            satified = false;
        }
    }
    if(satified==false) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}