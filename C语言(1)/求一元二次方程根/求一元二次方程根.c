#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,t,x1,x2;
    scanf("%f%f%f",&a,&b,&c);
    t=b*b-4*a*c;
    if(t<0)
        printf("该一元二次方程无解");
    if(t>0)
    {
        x1=(-b+sqrt(t))/(2*a);
        x2=(-b-sqrt(t))/(2*a);
        printf("存在两个根分别是X1=%.3f,X2=%.3f",x1,x2);
    }
    if(t==0)
        {
            x1=-b/2*a;
        printf("存在一个根:%.3f",x1);
        }
}
