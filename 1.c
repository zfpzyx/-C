#include <stdio.h>
#include "调用函数.c"

int main() {
	int value;
	register int i;
	printf("请输入循环执行的变量 （按0退出）");
	while (scanf("%d", &value) == 1 && value > 0) {
		for (i = value; i >= 0; i--) {
			counter(i);
		}

	}

	return 0;
}
