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
        printf("�����:%d",m);
    else
        printf("�����:%d",n);
}
