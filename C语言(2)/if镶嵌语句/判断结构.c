#include<stdio.h>
void main()
{float s;
scanf("%f",&s);
if (s>=90) printf("成绩优秀\n");
 if (s<90&s>=80) printf("成绩良好\n");
 if (s<80&s>=70) printf("成绩中等\n");
 if (s<70&s>=60) printf("成绩及格\n");
 if(s<60)        printf("成绩不及格\n");
}
