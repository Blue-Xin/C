#include<stdio.h>
void main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
   if(a>=b&a>=c)
   printf("最大数字为:%d",a);
   if(b>=a&b>=c)
    printf("最大数字为%d",b);
   if(c>=b&c>=a)
    printf("最大数字为:%d",c);
}
