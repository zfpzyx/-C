#include <stdio.h>

int main() {
	int array[] = {15, 20, 25, 30, 35};
	int i;
	int *ptr_array = array;
	for (i = 0; i < 5; i++) {
		printf("第%d个元素的值为%d\t地址为：%p\n", i + 1, *ptr_array, ptr_array);
		ptr_array++;
	}
	return 0;
}