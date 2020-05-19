#include<stdio.h>
void main()
{
    void pr(int x,int y);
    int a,b;
    scanf("%d%d",&a,&b);
    pr(a,b);
}
void pr(int m,int n)
{
    int i,j;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
            printf("*");
        printf("\n");
    }
}
