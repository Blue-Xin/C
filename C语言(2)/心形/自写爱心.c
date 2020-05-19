#include<stdio.h>
void main()
{
    int i,j,h;
    printf("     ******       ******\n" "   **********   **********\n" " ************* *************\n");
    for(i=1;i<=3;i++)
        for(i=1;i<=29;i++)
		printf("*");
		printf("\n");
  for(j=1;j<=7;j++)
  {
      for(h=1;h<=2*j-1;h++)
        printf(" ");
      for(h=1;h<=31-4*j;h++)
        printf("*");
      printf("\n");
  }
  for(j=0;j<=13;j++)
  printf(" ");
  printf("*\n"); 
}
