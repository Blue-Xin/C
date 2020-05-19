#include<stdio.h>
void main()
{
    int i,f;
    for(i=1;i<=10;i++)
    {
       for(f=1;f<=20-i;f++)
            printf(" ");
            printf("***********");
            printf("\n"); 
    }
}
