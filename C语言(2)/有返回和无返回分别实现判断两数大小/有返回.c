#include<stdio.h>
void main()
{
  int fmax(int x,int y);
    int a,b;
    scanf("%d%d",&a,&b);
    printf("×î´óÊı:%d",fmax(a,b));
    return 0;
}
int fmax(int m,int n)
{
    if(m>n)
        return m;
    else
        return n;
}
