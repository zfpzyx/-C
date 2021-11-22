#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int hp1 = 100,hp2 = 100;
	int att1,att2;
	srand(time (NULL));
	att1 = rand() % 11 + 5;
	att2 = rand() % 11 + 5;
	

	
	while(hp1 || hp2 >= 0)
	{
		hp1 -= att1;
		hp2 -= att2;
		printf("\n*********************************\n");
		printf("1攻击量为%d,1剩余血量为%d\n",att1,hp1);
		printf("2攻击量为%d，2剩余血量为%d\n",att2,hp2);
		printf("\n*********************************\n");
		
	}
	printf("游戏结束，玩家1血量：%d\t玩家2血量：%d\n");
return 0;
}

