#include <stdio.h>
int main()
{
	int num1 = 5, num2 = 2;
	double result1,result2,result3,result4;
	
	result1 = num1 / num2;//除法
	result2 = num1 % num2;//取模
	result3 = num1++;//后置
	result4 = --num1;//前置 
	
	printf("num1 / num2 = %lf\n",result1);
	printf("num1 % num2 = %lf\n",result2);
	printf("num1++ = %lf\n",result3);
	printf("--um1 = %lf\n",result4);
	
	return 0;
}
