#include <stdio.h>

void main() {
	int num = 1024;
	int *ptr_num;
	ptr_num = &num;
	printf("num的值为：%d\n", num);
	printf("num的内存地址为：%p\n", &num);
	printf("ptr_num的值为：%p\n", &ptr_num);
	printf("ptr_num的内存地址为：%p\n", &ptr_num);
	printf("*ptr_num指向的值为：%d\n", *ptr_num);
	return 0;
}