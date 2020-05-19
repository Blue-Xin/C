#include<stdio.h>
int main()
{
    int a[5]={12,5,97,4,13},i,*p;
    for(i=0;i<5;i++)
        printf("%-4d",*(&a[i]));
        printf("\n");
        p=a;
    for(i=0;i<5;i++)
        printf("%-4d",*(p+i));
    return 0;
}
