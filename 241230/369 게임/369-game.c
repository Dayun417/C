#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);

    for(i=1;i<=n;i++) {
        if(i%3==0)  {
            printf("0 ");
        } 
        else if(i>10 && i%10!=0) {
            if((i%10)%3==0 || (i/10)%3==0) {
                printf("0 ");
            } else {
                printf("%d ", i);
            }
        }
        else {
            printf("%d ", i);
        }
    }
    return 0;
}