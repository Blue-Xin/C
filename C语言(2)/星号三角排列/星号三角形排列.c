#include<stdio.h>
int main()
{
    int i,f;
    for(i=1;i<=20;i++)

    {
        for(f=1;f<=50-i;f++)// 50����ֵ����ѭ��������Ȼ��ÿ�μ�һ��ֱ������Ϊֹ 
        printf(" ");
        for(f=1;f<=2*i-1;f++)//2*i-1����ÿһ���Ǻ�ѭ������
        printf("*");
        printf("\n");//���������ڵ�һ��forѭ�����
    }
    return 0;
}
