#include<stdio.h>
void main()
{
float a;
scanf("%f",&a);
if (a>=90)
printf("成绩优秀\n");
if (a<90&&a>=80) 
printf("成绩良好\n");
if (a<80&&a>=70)
printf("成绩中等\n");
if (a<70&&a>=60) 
printf("成绩及格\n");
if (a<60)
printf("不及格\n");
}

