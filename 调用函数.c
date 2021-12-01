#include <stdio.h>
void counter(int);

void counter(int i) {
	static int subTotal = 0;
	subTotal++;
	printf("counter函数被调用了%d次\n", subTotal);
	return i;
}

