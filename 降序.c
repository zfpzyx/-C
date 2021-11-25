#include <stdio.h>
#define N 5

int main() {
	int i;
	int j;
	int temp;
	int nums[N] = {16, 25, 9, 90, 23};
	for (i = 0; i < N - 1; i++) {
		for (j = 0; j < N - i - 1; j++) {
			if (nums[j] > nums[j + 1]) {
				temp = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = temp;
			}
		}
		printf("从大到小顺序为%d\t", nums[j]);
	}



	return 0;
}