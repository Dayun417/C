#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		int sum_val=1;
		for (int j = a; j <= b; j++) {
			sum_val *= j;
		}
		printf("%d\n", sum_val);
	}

    return 0;
}