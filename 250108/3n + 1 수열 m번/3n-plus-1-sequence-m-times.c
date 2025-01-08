#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    for (int i = 0; i < a; i++) {
        int n;
		scanf("%d", &n);
        int cnt=0;
        
        while(n!=1) { 		
            if(n%2==0) {
                n = n/2;
                cnt++;
            } else {
                n = n*3+1;
                cnt++;
            }
        }
        printf("%d\n", cnt);
	}

    return 0;
}