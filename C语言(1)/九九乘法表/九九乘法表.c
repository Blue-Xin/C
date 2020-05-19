#include<stdio.h>
void main()
{
    int i,n;
    for(i=1;i<=9;i++)
    {
        for(n=1;n<=i;n++)
            printf("%d*%d=%-4d",i,n,n*i);
            printf("\n");
    }
}
