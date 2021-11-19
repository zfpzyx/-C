#include <stdio.h>
int main()
{
	int num1;//基本工资
	int num2;//物价津贴
	int num3;//房租津贴
	int num4;
	
	scanf("%d",&num1);

	num2 = num1 * 40 / 100;
	num3 = num1 * 20 / 100;
	num4 = num1 - num2 - num3;
	printf("%d\n",num4);
	

	 
	return 0;
 } 
 

