#include<stdio.h>
void main()
{
  float  a,b,c,S,G,H;
  printf("���������������߳�\n");
    scanf("%f%f%f",&a,&b,&c);
    S=a+b+c;
    H=S*1/2;
    printf("%f\n",H);
    G=sqrt(H*(H-a)*(H-b)*(H-c));
    printf("%f,",G);
}
