#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // 입력 개수 받기

    int arr[10];
    int cnt_arr[10] = {0}; // 개수 저장 배열

    // 배열 입력받기
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 입력된 숫자의 개수 세기
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 1 && arr[i] <= 9) { // 1~9 사이인지 확인
            cnt_arr[arr[i]]++;
        }
    }

    // 1부터 9까지의 개수 출력
    for (int i = 1; i < 10; i++) {
        printf("%d\n", cnt_arr[i]);
    }

    return 0;
}
