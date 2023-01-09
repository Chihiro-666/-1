#include <stdio.h>
#include <math.h>
//判断素数的函数 
int sushu(int n) 
{
	int i,m;
	m=sqrt(n);
	for(i=2;i<=m;i++)
	{
		if(n%i==0)
		{
			break;
		}
	}
	if(n==1||i<=m)
	return 0;
	else
	return 1;
}
int main()
{
	int a;
	scanf("%d",&a);
	for(int i=2;i<=a;i++)
	{
		if(sushu(i))//判断i是否为素数 
		{
			if(sushu(a-i))//判断x-i是否为素数 
			{
				printf("%d=%d+%d",a,i,a-i);
				break;
			}
			
		}
	}
	return 0;
}
