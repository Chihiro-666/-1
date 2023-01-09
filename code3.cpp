#include <stdio.h>
int main()
{
	int a,step=0;
	char b[100];
	scanf("%d",&a);
	for(step=0;a!=1;step++)
	{
		if(a%2==0)//偶数用^ 
		{
			a=a/2;
			b[step]='^';
		}
		else//奇数的两种情况 
		{
			if((a+1)/2%2==0&&a!=3)//特殊情况a=3 
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
	//输出 
	printf("%d\n",step);
	for(int i=0;i<step;i++)
	{
		printf("%c",b[i]);
	}
	return 0;
}
