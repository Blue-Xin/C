#include<stdio.h>
#include<math.h>
void main()
{
    int a,i;
    scanf("%d",&a);
    for(i=2;i<=sqrt(a);i++)
        if(a%i==0)  break;
        if(i>sqrt(a))
        printf("%d������",a);
    else printf("%d��������",a);
}
