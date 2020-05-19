#include<stdio.h>
int main()
{
    char a[100],b[100],*p1,*p2;
    int i=0,j=0;
    scanf("%s%s",a,b);
    p1=a;p2=b;
    while(a[i]!='\0')
        i++;
    while(b[j]!='\0')
    {
    a[i]=b[j];
    i++,j++;
    }
    a[i]='\0';
    printf("%s",a);
return 0;
}
