#include<stdio.h>
#include<string.h>
void main()
{
    char str1[100],str2[200];
    int i,max;
    gets(str1),gets(str2);
    strcat(str1,str2);
    max=str1[0];
    for(i=1;str1[i]!='\0';i++)
    if(str1[i]>max) {max=str1[i];}
    printf("%c",max);
}
