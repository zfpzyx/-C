#include <stdio.h>
int main()
{
	int num = 1;
	int i = 0;
	while(i < 9)
	{
		num = (num + 1) * 2;
		i++;
	}
		printf("第十天猴子有%d个桃子",num);
	return 0;
}
