#include<stdio.h>
void main()
{int s,i,j,f,h;
printf("�е�������:1"  "Ů��������:2\n");
scanf("%d",&s);
if (s>=2)
     {printf("��Ů���!\n");
	 printf("����һ����ϲ!\n");
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
	 printf("Ը��������Զ��������������!");
	 } 
  else  
  {
	 printf("˧�����!\n");
	 printf("����һ����ϲ!\n"); 
    
    int i,f;
    for(i=1;i<=20;i++)

    {
        for(f=1;f<=50-i;f++)// 50����ֵ����ѭ��������Ȼ��ÿ�μ�һ��ֱ������Ϊֹ 
        printf(" ");
        for(f=1;f<=2*i-1;f++)//2*i-1����ÿһ���Ǻ�ѭ������
        printf("*");
        printf("\n");//���������ڵ�һ��forѭ�����
    }
    printf("Ը����Ƚ�������һ�볤������!");
  } 
}

