#include<stdio.h>
int main()
{
    int a[5]={12,45,84,15,8},i,*p;
    p=a;
    for(i=0;i<5;i++)
        printf("%-4d",*(p+i));
    return 0;
}
