#include<stdio.h>
int main()
{
     int n;
     scanf("%d",&n);
     do
     {
          if(n%5==0&&n%7!=0)
          n++;
     }while(n<=100);
     printf("%d",n);
      return 0;
}

