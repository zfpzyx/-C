#include <stdio.h>
#define N 5

int main() {
	int count = 5;
	double powers[N] = {42322, 45771, 40907, 41234, 40767};
	double deletePower;
	int deleteIndex = -1;
	int insertPower;
	int i;
	printf("请输入要删除的战力值:");
	scanf("%lf", &deletePower);
	for (i = 0; i < count; i++) {
		if (deletePower == powers[i]) {
			deleteIndex = i;
			break;
		}
	}
	if (-1 == deleteIndex) {
		printf("很遗憾，没有找到要删除的战力值\n");
	} else {
		count--;
		for (i = deleteIndex; i < count; i++) {
			powers[i] = powers[i + 1];
		}
		printf("删除后的结果为\t");
		for (i = 0; i < count; i++) {
			printf("%.2lf\t", powers[i]);
		}
	}
	printf("请输入要添加的战斗力；");
	scanf("%d", &insertPower);
	powers[count] = insertPower;
	count++;
	printf("输入后的结果为：\n");
	for (i = 0; i < count; i++) {
		printf("%.2lf\t", powers[i]);
	}
	return 0;
}