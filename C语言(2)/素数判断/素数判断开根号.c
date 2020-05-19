#include<stdio.h>
#include<math.h>
void main()
{
    int a,i;
    scanf("%d",&a);
    for(i=2;i<=sqrt(a);i++)
        if(a%i==0)  break;
        if(i>sqrt(a))
        printf("%d是素数",a);
    else printf("%d不是素数",a);
}
