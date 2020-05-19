#include<stdio.h>
void main()
{
    int num,price,total,H,S,G; 
    char address;
    printf("请输入地点以及购买数量:"); 
    scanf("%c%d",&address,&num);
    
	 if(address=='H')
    {
         if(num>=1&&num<=100)
        printf("价格为%d",num*32);
        else if(num<=499)
        printf("价格为%d",num*26);
        else
        printf("价格为%d",num*18);
    }
        if(address=='G')
    {
        if(num>=1&&num<=300)
        printf("价格为%d",num*31);
        else if(num<=999)
        printf("价格为%d",num*24);
        else
        printf("价格为%d",num*17);
    }
    if(address=='S')   
	{
        if(num>=1&&num<=800)
        printf("价格为%d",num*30);
        else
        printf("价格为%d",num*18);
    }
}
