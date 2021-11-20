#include <stdio.h>
int main()
{
	int passward;
	int i = 0;
	
	while(i <= 3)//while while
	{
		printf("请输入密码：");
		scanf("%d",&passward);
		if(123456 != passward)
		{
			printf("密码错误,当前输入第%d次！\n",i + 1);
			i++;
		}
	if(i == 3)
	{
		printf("密码输入错误，系统强制关闭！\n");
		exit(0);
	}//int  出现问题：变量那里没赋值，赋值后记住赋值量啊！！！！ 
		
	}
	
	return 0;
}
