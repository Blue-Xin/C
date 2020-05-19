#include<stdio.h>
int main()
{int a[10]={12,777,89,45,82,19,78,99,56,88},max,i,n,t;
for(n=1;n<10;n++)
{for(i=0;i<9;i++)
if(a[i]<a[i+1]){t=a[i],a[i]=a[i+1],a[i+1]=t;}
}
for(n=0;n<10;n++)
    printf("%3d",a[n]);
return 0;
}
