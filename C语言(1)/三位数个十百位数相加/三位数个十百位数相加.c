#include<stdio.h>
void main()
{
    int a,a1,a2,a3,a4;
    printf("��������һ����λ����");
    scanf("%d",&a);//563
   a1=a%10;
   a2=a/10%10;
   a3=a/100;
   a4=a1+a2+a3;
    printf("��λ=%d\nʮλ:=%d\n��λ=%d\n���=%d\n",a1,a2,a3,a4);



}
