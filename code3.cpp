#include <stdio.h>
int jishu(int a)
{
	if((a+1)/2%2==0)
	{
		a=a+1;
		printf("+");
	}
	else 
	{
		a=a-1;
		printf("-"); 
	}
	return (a);
}
int main()
{
	int a,step=0;
	scanf("%d",&a);
	for(step=0;a!=1;step++)
	{
		if(a%2==0)
		{
			a=a/2;
			printf("^");
		}
		else
		{
			a=jishu(a);
		}
	}
	printf("\n");
	printf("%d",step);
}
