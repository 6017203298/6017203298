#include "stdio.h"
#include "conio.h"
main()
{
  int x,y,z,t;
  printf("�������������� �ÿո���� �س�ȷ��");
  scanf("%d%d%d",&x,&y,&z);
  if (x>y)
    {t=x;x=y;y=t;} /*����x,y��ֵ*/
  if(x>z)
    {t=z;z=x;x=t;} /*����x,z��ֵ*/
  if(y>z)
    {t=y;y=z;z=t;} /*����z,y��ֵ*/
  printf("��С����: %d %d %d\n",x,y,z);
  getch(); 
}