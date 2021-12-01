#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double calccircle(double);//根据传入半径返回圆面积
int validate(double);
int main() {
	double R;
	double s;
	printf("请输入要算的值:");
	int flag;
	flag = 0;
	do {
		scanf("%lf", &R);
		if (!validate(R)) {
			printf("所输入内容不能为负数，从新输入：");
		}
	} while (!validate(R));

	s = calccircle(R);
	printf("面积为 %.2lf\n", s);
	return 0;
}

double calccircle(double R) {
	double s = 3.14 * pow(R, 2);
	return s;//返回已经算好的圆面积
}

int validate(double num) {
	return num > 0;
}
