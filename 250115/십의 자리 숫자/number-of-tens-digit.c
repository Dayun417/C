#include <stdio.h>

int main() {
	int count_arr[10] = {0,};
	int arr[100];
	
	for(int i = 0; i < 100; i++) {
		scanf("%d", &arr[i]);
		if(arr[i] == 0)
			break;
		if(arr[i] < 10)
			continue;
		count_arr[arr[i] / 10]++;
	}
	
    for(int i = 1; i <= 9; i++) {
        printf("%d - %d\n", i, count_arr[i]);
    }

    return 0;
}
