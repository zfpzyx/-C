#include <stdio.h>
int main()
{
	int choice;
	printf("性格测试：\n");
	printf("如果你现在是一位皇帝，对于您身边的伴侣您希望？\n");
	printf("1、只要有一位就够了\n");
	printf("2、可以两位以上的爱人\n");
	printf("3、后宫佳丽三千人\n");
	do{
		printf("请选择：\n");
		scanf("%d", &choice);
		
		
			if(choice <= 0 || choice > 3 )
		{
			printf("输入错误，只可以属于1.2.3之间的数字\n");
		 } 
	} while( choice <= 0 || choice > 3 );
	switch(choice)
	{
		case 1:
			printf("您选择了生命中的唯一。\n");
			break;
		case 2:
			printf("你个花心大萝卜！\n");
			break;
		case 3:
			printf("你想屁吃呢？\n");
			break;
	}
	return 0;
}
