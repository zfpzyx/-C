#include <stdio.h>

int main() {
	int i;
	int sum = 0;
	double avg;
	int searchNum;
	int nums[] = {8, 4, 2, 1, 23, 344, 12};
	printf("输出数字为：\n");
	for (i = 0; i < 7; i++) {
		printf("%d\t", nums[i]);

	}
	printf("\n**************\n");
	printf("\n");
	for (i = 0; i < 7; i++) {
		sum += nums[i];
	}
	avg = sum / 7.0;
	printf("请输入要查找的数字：");
	scanf("%d", &searchNum);
	for (i = 0; i < 7; i++) {
		if (searchNum == nums[i]) {
			printf("找到了你的数字！\n");
			break;
		} else {
			printf("没找到你的数字\n");
		}

	}
	return 0;
}