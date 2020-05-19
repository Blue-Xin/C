#include<stdio.h>
void main()
{
    int a,a1,a2,a3,a4;
    printf("任意输入一个三位数：");
    scanf("%d",&a);//563
   a1=a%10;
   a2=a/10%10;
   a3=a/100;
   a4=a1+a2+a3;
    printf("个位=%d\n十位:=%d\n百位=%d\n结果=%d\n",a1,a2,a3,a4);



}
