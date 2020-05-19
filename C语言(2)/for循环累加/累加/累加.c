#include<stdio.h>
void main()
{
    int i,sum=0,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=i+sum;
    }
printf("1+2+3+.....+%d=%d",n,sum);
}
