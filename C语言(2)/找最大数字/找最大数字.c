#include<stdio.h>
void main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
   if(a>=b&a>=c)
   printf("�������Ϊ:%d",a);
   if(b>=a&b>=c)
    printf("�������Ϊ%d",b);
   if(c>=b&c>=a)
    printf("�������Ϊ:%d",c);
}
