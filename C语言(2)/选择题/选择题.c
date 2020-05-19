#include<stdio.h>
void main()
{int s,i,j,f,h;
printf("男的请输入:1"  "女的请输入:2\n");
scanf("%d",&s);
if (s>=2)
     {printf("美女你好!\n");
	 printf("给你一个惊喜!\n");
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
	 printf("愿你心情永远美丽，永开不败!");
	 } 
  else  
  {
	 printf("帅哥你好!\n");
	 printf("给你一个惊喜!\n"); 
    
    int i,f;
    for(i=1;i<=20;i++)

    {
        for(f=1;f<=50-i;f++)// 50的数值决定循环次数，然后每次减一，直到减完为止 
        printf(" ");
        for(f=1;f<=2*i-1;f++)//2*i-1决定每一次星号循环次数
        printf("*");
        printf("\n");//这个输出属于第一个for循环语句
    }
    printf("愿你情比金坚和你另一半长相厮守!");
  } 
}

