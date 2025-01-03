#include <stdio.h>

int main() {
    int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = 1; j <= (n - i) * (n - i); j++) {
			printf("*");
			if(j % (n-i) == 0){
				printf(" ");
			}
		}
		printf("\n");
	}

    return 0;
}