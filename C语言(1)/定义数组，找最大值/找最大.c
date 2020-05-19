#include<stdio.h>
void main()
{
    int a[10]={10,15,444,78,79,45,66,33,189,1},i,max,d;
    max=a[0];
    for(i=1;i<10;i++)
        if(max<a[i]) {max=a[i],d=i;}
    printf("最大值:%d,位置在:%d",max,d+1);
}
