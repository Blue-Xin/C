#include<stdio.h>
void main()
{
    int num,price,total,H,S,G; 
    char address;
    printf("������ص��Լ���������:"); 
    scanf("%c%d",&address,&num);
    
	 if(address=='H')
    {
         if(num>=1&&num<=100)
        printf("�۸�Ϊ%d",num*32);
        else if(num<=499)
        printf("�۸�Ϊ%d",num*26);
        else
        printf("�۸�Ϊ%d",num*18);
    }
        if(address=='G')
    {
        if(num>=1&&num<=300)
        printf("�۸�Ϊ%d",num*31);
        else if(num<=999)
        printf("�۸�Ϊ%d",num*24);
        else
        printf("�۸�Ϊ%d",num*17);
    }
    if(address=='S')   
	{
        if(num>=1&&num<=800)
        printf("�۸�Ϊ%d",num*30);
        else
        printf("�۸�Ϊ%d",num*18);
    }
}
