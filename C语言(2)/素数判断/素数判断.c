 #include<stdio.h>
void main()
{
    int a,i;
    scanf("%d",&a);
    for(i=2;i<=a-1;i++)
        if(a%i==0) break;
        if(i<=a-1)
        printf("%d��������",a);
    else printf("%d������",a);
}
