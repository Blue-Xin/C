#include<stdio.h>
void main()
{
    int a,b,c,i,n;
    scanf("%d",&a);
    {for(i=2;i<=a-1;i++)
        if(a%i==0)break;
        if(!(i<=a-1))

            b=a-i;
           {for(n=2;n<=b-1;n++)
             if(b%n==0) break;
             if(!(n<=b-1));
            }
    }
    printf("%d=%d+%d",a,i,b);


}

