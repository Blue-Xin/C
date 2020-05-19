#include<stdio.h>
int main()
{
    int a[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16},i,n;
    for(i=0;i<4;i++)
    {
        for(n=0;n<4;n++)
            printf("%- 3d",a[i][n]);
        printf("\n");
    }
    return 0;
}
