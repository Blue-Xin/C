#include<stdio.h>
#include<string.h>
void main()
{
    char str1[100],str2[200];
    gets(str1),gets(str2);
    if(strcmp(str1,str2)>0) printf("ǰ�ߴ�");
    if(strcmp(str1,str2)<0) printf("���ߴ�");
    if(strcmp(str1,str2)==0) printf("����һ����");
}
