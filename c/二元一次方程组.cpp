#include<stdio.h>
int main()
{
	int x,y,a,b,c,d,e,f;
	printf("�����뷽�̵�ϵ��"); 
	scanf("%d,%d,%d,%d,%d,%d",&a,&b,&c,&d,&e,&f);
	x=(f*b-e*c)/(b*d-a*e);
	y=(a*f-c*d)/(a*e-b*d); 
	printf("x=%d,y=%d\n",x,y);
	return 0;
 } 	
