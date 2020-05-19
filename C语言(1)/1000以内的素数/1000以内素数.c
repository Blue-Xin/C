#include<stdio.h>
#include<math.h>
int main()
{void judge(int hhh);
int i;
for(i=1;i<=1000;i++)
judge(i);
return 0;}
void judge(int n)
{int i;
  for(i=2;i<=n-1;i++)
if(n%i==0) break;
if(!(i<=n-1)) printf("%-4d",n);

}
