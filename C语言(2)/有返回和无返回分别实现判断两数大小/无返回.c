#include<stdio.h>
void main()
{
  void fmax(int x,int y);
    int a,b;
    scanf("%d%d",&a,&b);
    fmax(a,b);
}
void fmax(int m,int n)
{
    if(m>n)
        printf("最大数:%d",m);
    else
        printf("最大数:%d",n);
}
