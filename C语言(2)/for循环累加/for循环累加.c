#include<stdio.h>
void  main()
{
    int i,sum=0,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)//�����i++��ѭ����sum=sum+i֮���i��1
        {
            sum=sum+i;
        }
    printf("%d",sum);
}
