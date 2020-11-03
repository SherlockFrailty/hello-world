#include<stdio.h>
int main( )
{
    int a1,b1,c1; 
	int a2,b2,c2;
	int a3,b3,c3;
	int a4,b4,c4;
	int x,y;
	printf("Çë¾¡Çé·Ô¸ÀÖ÷ÈË£¬Éµ±Æ£º\n");
	printf("a1=");
	scanf("%d",&a1);
	printf("a2=");
	scanf("%d",&a2);
	printf("b1=");
	scanf("%d",&b1);
	printf("b2=");
	scanf("%d",&b2);
	printf("c1=");
	scanf("%d",&c1);
	printf("c2="); 
	scanf("%d",&c2); 
	a3=a1*a2;
    a4=a2*a1;
	b3=b1*a2;
	b4=b2*a1;
	c3=c1*a2;
	c4=c2*a1;
	y=(c3-c4)/(b3-b4);
	a3=a1*b2;
	a4=a2*b1;
	b3=b1*b2;
	b4=b2*b1;
	c3=c1*b2;
	c4=c2*b1;
	x=(c3-c4)/(a3-a4);
	printf("%d %d\n",x,y);
	return 0;
} 
