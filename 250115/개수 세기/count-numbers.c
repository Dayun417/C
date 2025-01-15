#include <stdio.h>

int main() {
    int n, num, arr[100], cnt=0;
    scanf("%d %d", &n, &num);

    for(int i=0;i<n;i++) {
        scanf("%d ", &arr[i]);
    }
	for(int i=0;i<n;i++) {
        if(arr[i]==num) {
			cnt++;
		}
    }
	printf("%d", cnt);

    return 0;
}