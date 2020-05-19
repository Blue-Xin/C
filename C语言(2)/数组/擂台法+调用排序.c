#include<stdio.h>
void p(int b[]) 
{
	int i,n,j,t;
	for(j=0;j<10;j++)
  {
	for(i=0;i<5;i++)
	{
		if(b[i]<b[i+1]){t=b[i],b[i]=b[i+1],b[i+1]=t;}
	}
  }
		for(n=0;n<5;n++)
	printf("%-3d",b[n]);
}
int main()
{
	int a[5]={12,4,78,63,15};
	p(a);
return 0; 
} 

