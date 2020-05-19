#include<stdio.h>
int main()
{int a[10],max,i,n,t,x;
for(i=0;i<10;i++)
scanf("%d",&a[i]);
for(i=1;i<10;i++)
{for(n=0;n<9;n++)
if(a[n]>a[n+1]){t=a[n],a[n]=a[n+1],a[n+1]=t;}
}
for(i=0;i<10;i++)
    printf("%3d",a[i]);
    printf("\n");
    for(i=0;i<10;i++)
	if(a[i]==0) {x=0;break;}
    if(x==0) printf("сп0");
 else printf("ц╩сп0");
return 0;
}
