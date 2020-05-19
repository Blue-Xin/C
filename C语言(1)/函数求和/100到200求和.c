#include<stdio.h>
void main()
{
    void fsum(int kg);
    fsum(100);
    fsum(200);
}
void fsum(int n)
{
    int i,sum=0;
    for(i=1;i<=n;i++)
    sum=sum+i;
    printf("ºÍÎª:%d\n",sum);
}
