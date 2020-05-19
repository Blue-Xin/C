#include<stdio.h>
void main()
{
    int a,b,t,i;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        t=a,a=b,b=t;
    }
    for(i=a;i>1;i--)
        if(a%i==0&&b%i==0) 
    printf("¹«Ô¼Êý:%d\n",i);
    
}
