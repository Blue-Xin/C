#include<stdio.h>
int main()
{
    int i,a=0,b=1,t,sum=0;
    printf("元素分别是:");
    printf("1");
    for(i=1;i>0;i++)
    {
        sum=a+b;
        a=b;
        b=sum;
        printf("%6d",sum);
        if(sum>900) break;
    }
    printf("\n");
    printf("元素共有%d个",i+1);
}
