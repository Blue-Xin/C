#include<stdio.h>
void main()
{
    int a[5]={12,4,56,78,13},i,sum,aver;
    for(i=0;i<5;i++)
        sum=sum+a[i];
    aver=sum/5;
    for(i=0;i<5;i++)
        if(a[i]>aver) printf("%-3d",a[i]);
}
