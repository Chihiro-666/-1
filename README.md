#include <stdio.h>
int jishu(int a)
{
	
	return (a);
}
int main()
{
	int a,step=0;
	char b[100];
	scanf("%d",&a);
	for(step=0;a!=1;step++)
	{
		if(a%2==0)
		{
			a=a/2;
			b[step]='^';
		}
		else
		{
			if((a+1)/2%2==0&&a!=3)
			{
				a=a+1;
				b[step]='+';
			}
			else 
			{
				a=a-1;
				b[step]='-' ;
			}
		}
	}
	printf("%d\n",step);
	for(int i=0;i<step;i++)
	{
		printf("%c",b[i]);
	}
	return 0;
}
