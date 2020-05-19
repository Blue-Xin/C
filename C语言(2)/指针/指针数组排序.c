#include<stdio.h>
void sort(int *p)
{
    int i,n,t;
	for(i=0;i<5;i++)
	{
	 for(n=0;n<4;n++)
	 { 
		if(*(p+n)>*(p+n+1)){t=*(p+n),*(p+n)=*(p+n+1),*(p+n+1)=t;}
	 }	
    }
    
}
int main()
{
   int a[5]={13,47,85,17,36},*p,i;
  p=a;
  sort(p);
  for(i=0;i<5;i++)
  printf("%-3d",a[i]);
  return 0;
}
