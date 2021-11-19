#include <stdio.h>
int main()
{
	int num = 10;
	int result = num++ > 11 && --num < 20;
	
	printf("%d\n%d\n%d\n",num++,--num,result);
	return 0;
	
}
