#include<stdio.h>
void main()
{float s;
scanf("%f",&s);
if (s>=90)
     printf("成绩优秀\n");
     else if (s>=80)
     printf("成绩良好\n");
     else if (s>=70)
     printf("成绩中等\n");
     else if (s>=60)
     printf("成绩及格\n");
     else
     printf("不合格");
}
