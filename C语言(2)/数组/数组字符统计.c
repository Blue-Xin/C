#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i;
	float n,j,x=0,y=0,z;
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
	if(str[i]>='a'&&str[i]<='z'){x=x+1;}
	if(str[i]>='A'&&str[i]<='Z'){y=y+1;}
    }
    z=strlen(str)-x-y;
    printf("��д��ĸ��%.0f����ռ�İٷֱ�Ϊ%.3f\n",y,(y/strlen(str))*100);
    printf("Сд��ĸ��%.0f����ռ�İٷֱ�Ϊ%.3f\n",x,(x/strlen(str))*100);
    printf("������ĸ��%.0f����ռ�İٷֱ�Ϊ%.3f\n",z,(z/strlen(str))*100);
    return 0; 
 }

