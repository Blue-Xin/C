#include<stdio.h>
#include<string.h>
void main()
{
    char str1[100],str2[200];
    gets(str1),gets(str2);
    if(strcmp(str1,str2)>0) printf("前者大");
    if(strcmp(str1,str2)<0) printf("后者大");
    if(strcmp(str1,str2)==0) printf("两者一样大");
}
