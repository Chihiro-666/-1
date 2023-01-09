#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	//将时间戳变成种子，是每次随机数不同 
	srand(time(0));
	int x=rand()%5+3;  
	int y=rand()%5+3;  
	int i,j,a[10][10];
	int b[100],h=0;
	printf("%d %d\n",x,y);
	printf("原矩阵为:\n");
	//同理得出矩阵 
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{ 
			a[i][j]=rand()%10+0;
		}
	}
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	//将矩阵螺旋式放入一维数组中 
	for(i=0;i<x/2;i++)
	{
		for(j=i;j<y-i-1;j++)
		{
			b[h]=a[i][j] ;
			h++;
		}
		for(j=i;j<x-i-1;j++)
		{
			b[h]=a[j][y-i-1];
			h++;
		}
		for(j=y-1-i;j>i;j--)
		{
			b[h]=a[x-1-i][j];
			h++;
		}
		for(j=x-1-i;j>i;j--)
		{
			b[h]=a[j][i];
			h++;
		}
	}
	h=b[x*y-1];
	//将一维数组中的元素向后移动一个单位 
	for(i=x*y-1;i>0;i--)
	{
		b[i]=b[i-1];
	}
	b[0]=h;
	h=0;
	//再将一维数组中的元素以同样的螺旋方式放入二维数组矩阵中 
	for(i=0;i<x/2;i++)
	{
		for(j=i;j<y-i-1;j++)
		{
			a[i][j]=b[h];
			h++;
		}
		for(j=i;j<x-i-1;j++)
		{
			a[j][y-i-1]=b[h];
			h++;
		}
		for(j=y-1-i;j>i;j--)
		{
			a[x-1-i][j]=b[h];
			h++;
		}
		for(j=x-1-i;j>i;j--)
		{
			a[j][i]=b[h];
			h++;
		}
	}
	//输出 
	printf("移动后的矩阵为：\n");
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
 
