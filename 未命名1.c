#include <stdio.h>
int main()
{
	int i;
	int j;
	int u;

	for(i = 0;i < 4;i++)
	{
		for(u = 0;u <= 2 - i ;u++)
		{
			printf(" ");
		}
		for(j = 0;j <=i * 2 ; j++)
		{
			printf("*");
		}
	
		
		printf("\n");
	}
	return 0;
}
