#include <stdio.h>
int main()
{
	int a,b;
	bool flag;
	
	printf("Enter:");
	scanf("%d",&a);
	for(;a>0;a++){
	  b=a*a;
	   printf("%12d%12d\n",a,b);
	
	if(a>100000)
	 goto hhhhh;
    }
    
    hhhhh:
    	if(flag)
    	printf("�����̱"); 
    	else
    	for(;;){
		printf("������̫���ˣ��Ҳ������˵��\n");
		}
    	
    return 0;
    
}
