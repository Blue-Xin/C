#include<stdio.h>
void main()
{
    int i,f;
    for(i=1;i<=20;i++)
    {
        for(f=1;f<=50-i;f++)
            printf(" ");
            printf("*");
        for(f=1;f<=2*i-1;f++)
            printf(" ");
            printf("*");
        printf("\n");
    }
}
