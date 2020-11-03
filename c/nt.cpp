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
    	printf("你个脑瘫"); 
    	else
    	for(;;){
		printf("你智商太低了，我不想跟你说话\n");
		}
    	
    return 0;
    
}
