#include<stdio.h>
void main()
{
    int a,a1,a2,a3;
    for(a=100;a<=999;a++)
   {
    a1=a/100;
    a2=a%100/10;
    a3=a%10;

    if(a==a1*a1*a1+a2*a2*a2+a3*a3*a3)
    printf("ˮ�ɻ�����%-4d\n",a);
   }
}
