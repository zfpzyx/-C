#include <stdio.h>
int main()
{
	int month;
	printf("请输入月份，我来判断天数：");
	scanf("%d",&month);
	
	switch(month);
	{
	case 1:
		printf("1月有31天\n");
		break;
	case 2:
		printf("2月有28天\n");
		break;
	case 3:
		printf("3月有31天\n");
		break;
	case 4:
		printf("4月有3天\n");
		break;
	default:
		printf("当前程序暂时只能判断这些。");
		
	}
	return 0;
}
