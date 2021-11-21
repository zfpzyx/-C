#include <stdio.h>
int main ()
{
	int i = 0;
	int password;
	
	while(i <= 3)
	{
		printf("请输入密码：");
		scanf("%d",&password); 
		
		if(password != 123456)
		printf("密码输入错误，这是第%d次输入\n",i + 1);
		i++;
		
		
	while(i >2)
	{
		printf("密码输入错误三次，系统强制关闭。");
		exit (0);
		
		return 0;
	 } 
		 } 	
}
