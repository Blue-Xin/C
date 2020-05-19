#include<stdio.h>
int main()
{
	FILE *p;
	char ch;
	p=fopen("1.txt","w"); 
		ch=getchar();
		while(ch!='#')
		{
		 fputc(ch,p);
		 ch=getchar();
		}
	fclose(p);
	return 0;
 } 
