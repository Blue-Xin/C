#include<stdio.h>
void  main()
{
    int i,sum=0,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)//这里的i++是循环了sum=sum+i之后的i加1
        {
            sum=sum+i;
        }
    printf("%d",sum);
}
