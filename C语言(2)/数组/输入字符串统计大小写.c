#include<stdio.h>
#include<string.h>
void main()
{
    char str[200];
    int i,a=0,b=0;
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a'&&str[i]<='z') {a++;}
        if(str[i]>='A'&&str[i]<='Z') {b++;}
    }
    printf("��д��ĸ��%d��\n",b);
    printf("Сд��ĸ��%d��",a);
}
