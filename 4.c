#include <stdio.h>
#define N 5

int main() {
	int nums[N] = {4, 3, 12, 45, 30};
	int i, j;
	int temp;
	for (i = 0; i < N - 1; i++) {
		for (j = 0; j < N - 1; j++) {
			if (nums[j] > nums[j + i]) {
				temp = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = temp;

			}
		}

	}

	printf("ÅÅĞò½á¹ûÊÇ:");

	for (i = 0; i < N; i++) {
		printf("%d\t", nums[i]);
	}

	return 0;
}