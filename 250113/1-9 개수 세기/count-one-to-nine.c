
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int arr[10];
	int count_arr[10] = { 0, };

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	// 개수 세기
	for (int i = 0; i < n; i++) {
		count_arr[arr[i]]++;
	}

	// 개수 출력
	for (int i = 1; i < 10; i++) {
		printf("%d\n", count_arr[i]);
	}

	return 0;

}

