#include<stdio.h>
void  main()
{
   int ch;
   scanf("%c",&ch);
   switch(ch-64)
   {
        case 1:printf("成绩优秀\n");break;
        case 2:printf("成绩良好\n");break;
        case 3:printf("成绩中等\n");break;
        case 4:printf("成绩合格\n");break;
        case 5:printf("成绩不及格\n");break;
        default:printf("输入错误");
    }
}
