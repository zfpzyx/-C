#include <stdio.h>
int main()
{
	char ch1,ch2;
	printf("请输入字符：");
	ch1 = getchar();
	fflush(stdin);
	printf("请输入第二个字符：");
	ch2 = getchar();
	printf("您输入的字符是：%c,%c\n",ch1,ch2);
	putchar(ch1);
	putchar(', d');
	putchar(ch2);
	return 0;
	
}
