#include<stdio.h>
int main()
{
    int i,f;
    for(i=1;i<=20;i++)

    {
        for(f=1;f<=50-i;f++)// 50的数值决定循环次数，然后每次减一，直到减完为止 
        printf(" ");
        for(f=1;f<=2*i-1;f++)//2*i-1决定每一次星号循环次数
        printf("*");
        printf("\n");//这个输出属于第一个for循环语句
    }
    return 0;
}
