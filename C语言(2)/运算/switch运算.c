#include<stdio.h>
void main()
{
int num,price,total,H,G,S;
char address;
printf("请输入地点以及购买数量\n");
scanf("%c%d",&address,&num);
switch(address)
 {
 case'H':{
 	if(num>=1&&num<=100)
        printf("价格为%d",num*32);
        else if(num<=499)
        printf("价格为%d",num*26);
        else
        printf("价格为%d",num*18);
	break;
         }
 case'G':{
        if(num>=1&&num<=300)
        printf("价格为%d",num*31);
        else if(num<=999)
        printf("价格为%d",num*24);
        else
        printf("价格为%d",num*17);
	break;
         }
  case'S':{
        if(num>=1&&num<=800)
        printf("价格为%d",num*30);
        else
        printf("价格为%d",num*18);
	break;
          }	
 }
}
