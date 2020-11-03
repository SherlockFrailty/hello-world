#include <stdio.h>
int main()
{
	int h,m;
	printf("Enter a 24-hour time:");
	scanf("%d%d",&h,&m);
	
	printf("Equivalent 12-hour time:");
	
	if(h<=12){
	    printf("%d:%d a.m.",h,m); 
		} 
	
    else{ 
        h -= 12;
	    printf("%d:%d p.m.",h,m);
	    } 
	
	
	return 0;
}
