#include<stdio.h>
int main()
{
	FILE *p;
	char ch;
	p=fopen("1.txt","r"); 
	if(p==NULL)
	{printf("�ļ������ڣ������ļ���");exit(0);}
	
		ch=fgetc(p);
		while(ch!=EOF)
		{printf("%c",ch);
		 ch=fgetc(p);
		}
	fclose(p);
	return 0;
 } 
