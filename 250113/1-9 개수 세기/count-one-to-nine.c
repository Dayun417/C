
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int arr[10];
	int cnt_arr[10] = { 0, };

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);

		// 입력값 검증
        if (arr[i] < 0 || arr[i] > 9) {
            printf("Invalid input: %d\n", arr[i]);
            return 1; // 프로그램 종료
        }
	}

	// 개수 세기
	for (int i = 0; i < n; i++) {
		cnt_arr[arr[i]]++;
	}

	// 개수 출력
	for (int i = 1; i < 10; i++) {
		printf("%d\n", cnt_arr[i]);
	}

	return 0;

}

