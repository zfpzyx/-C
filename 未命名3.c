#include <stdio.h>
int main()
{ 
 double pixie = 229.00;
 double bao = 10240.55;
 double xiangshui = 2345.3;
 double total = pixie + bao + xiangshui;
 double zhekou = total * 0.3;

if
( 
 pixie > 1000 || bao > 1000 || xiangshui > 1000 || total > 5000
)
 
 {
 total = total - zhekou;
 printf("最后应付款：%.2lf\n",total);
}
 

else
 printf("最后应付款：%d\n",total);//答案是3844.45 
 
 return 0 ;
} 






