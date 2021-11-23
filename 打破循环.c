#include <stdio.h>
int main()
{
	int age;
	for(;;)
	{
		printf("请输入玩家年龄：");
		scanf("%d",&age);
		if(age < 0)
		{
			printf("玩家年龄不能为负数！退出系统！"); 
			break;
		}
	}
	return 0;
}
