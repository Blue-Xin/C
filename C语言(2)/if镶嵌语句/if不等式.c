#include<stdio.h>
void main()
{
    int x,y;
    scanf("%d",&x);
    if(x<1)
        printf("y=%d",x);
    else if(x<10)
    {
        y=2*x-1;
        printf("y=%d",y);
    }
    else
    {
        y=3*x-11;
        printf("y=%d",y);
    }
}
