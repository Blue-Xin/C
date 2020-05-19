#include<stdio.h>
void main()
{
    int i,f;
    for(i=1;i<=20;i++)
    {
        for(f=1;f<=i;f++)
            printf(" ");
        printf("V");
        for(f=1;f<=40-2*i;f++)
            printf(" ");
        printf("V");
    printf("\n");
    }
}
