 #include<stdio.h>
void main()
{
    int a,i;
    scanf("%d",&a);
    for(i=2;i<=a-1;i++)
        if(a%i==0) break;
        if(i<=a-1)
        printf("%d不是素数",a);
    else printf("%d是素数",a);
}
