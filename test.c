#include <stdio.h>
int main()
{
	int num1 = 5;
	int num2 = 2;
	double result1;
	double result2;
	double result3;
	double result4;
	
	result1 = num1 / num2;
	result2 = num1 % num2;
	result3 = num1++;
	result4 = --num2;
	
	printf("num1 / num2 = %lf\n",result1);
	printf("num1 % num2 = %lf\n",result2);
	printf("num1++ = %ld\n",result3);
	printf("--num2 = %d\n",result4);
	return 0;
}
