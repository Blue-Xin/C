#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,t,x1,x2;
    scanf("%f%f%f",&a,&b,&c);
    t=b*b-4*a*c;
    if(t<0)
        printf("��һԪ���η����޽�");
    if(t>0)
    {
        x1=(-b+sqrt(t))/(2*a);
        x2=(-b-sqrt(t))/(2*a);
        printf("�����������ֱ���X1=%.3f,X2=%.3f",x1,x2);
    }
    if(t==0)
        {
            x1=-b/2*a;
        printf("����һ����:%.3f",x1);
        }
}
