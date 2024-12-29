#include <stdio.h>

int main() {
    int n, classroom=0, hall=0, bath=0;
    scanf("%d", &n);

    for(int i=1;i<n;i++) {
        if(i%12==0) {
            bath++;
        } else if(i%3==0) {
            hall++;
        } else if(i%2==0) {
            classroom++;
        }
    }
    printf("%d %d %d", classroom, hall, bath);

    return 0;
}