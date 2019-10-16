#include "stdio.h"
#include "conio.h"
main()
{
  int x,y,z,t;
  printf("请输入三个数字 用空格隔开 回车确认");
  scanf("%d%d%d",&x,&y,&z);
  if (x>y)
    {t=x;x=y;y=t;} /*交换x,y的值*/
  if(x>z)
    {t=z;z=x;x=t;} /*交换x,z的值*/
  if(y>z)
    {t=y;y=z;z=t;} /*交换z,y的值*/
  printf("从小到大: %d %d %d\n",x,y,z);
  getch(); 
}