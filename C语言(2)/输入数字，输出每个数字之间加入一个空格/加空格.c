#include<stdio.h>
int main()
{
	int a,b,c,d,i;
	
	scanf("%d",&i);
	a=i/1000;
	b=i/100%10;
	c=i/10%10; 
	d=i%10;
	printf("%d %d %d %d",a,b,c,d); 
return 0;
}   
