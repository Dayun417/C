#include <stdio.h>

int main() {
    int a, save, cnt=0;
    scanf("%d", &a);

    for (int i = 0; i < a; i++) {
        int n;
		scanf("%d", &n);
        
        while(n!=1) { 		
            if(n%2==0) {
                n = n/2;
                cnt++;
            } else {
                n = n*3+1;
                cnt++;
            }
        }
	}

    printf("%d", cnt);

    return 0;
}