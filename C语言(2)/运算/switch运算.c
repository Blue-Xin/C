#include<stdio.h>
void main()
{
int num,price,total,H,G,S;
char address;
printf("������ص��Լ���������\n");
scanf("%c%d",&address,&num);
switch(address)
 {
 case'H':{
 	if(num>=1&&num<=100)
        printf("�۸�Ϊ%d",num*32);
        else if(num<=499)
        printf("�۸�Ϊ%d",num*26);
        else
        printf("�۸�Ϊ%d",num*18);
	break;
         }
 case'G':{
        if(num>=1&&num<=300)
        printf("�۸�Ϊ%d",num*31);
        else if(num<=999)
        printf("�۸�Ϊ%d",num*24);
        else
        printf("�۸�Ϊ%d",num*17);
	break;
         }
  case'S':{
        if(num>=1&&num<=800)
        printf("�۸�Ϊ%d",num*30);
        else
        printf("�۸�Ϊ%d",num*18);
	break;
          }	
 }
}
