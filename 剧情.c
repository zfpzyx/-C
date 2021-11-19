#include <stdio.h>
int main()
{
	double flowerprice;
	printf("在一个夜黑风高的夜晚\n");
	printf("一个小男生用自己钱买了一束鲜花\n");
	printf("女的问男的价格“这花多少钱？”\n");
	printf("男的说：");
	scanf("%lf",&flowerprice);
	
	if(flowerprice > 10)
	{
		printf("女的说太贵了我不能收");
	}
	
	
	
	else if(flowerprice <5 && flowerprice > 1)
	{
		printf("女的说哇塞谢谢你");
	}
	
	
	
	else if(flowerprice < 1)
	{
		printf("女的说谢谢你");
	}
	
	
	
	return 0;
	
}
