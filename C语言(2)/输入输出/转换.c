#include<stdio.h>
void  main()
{
   int ch;
   scanf("%c",&ch);
   switch(ch-64)
   {
        case 1:printf("�ɼ�����\n");break;
        case 2:printf("�ɼ�����\n");break;
        case 3:printf("�ɼ��е�\n");break;
        case 4:printf("�ɼ��ϸ�\n");break;
        case 5:printf("�ɼ�������\n");break;
        default:printf("�������");
    }
}
