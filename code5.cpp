#include <stdio.h>
int main()
{
	char a[100];
	int b[100];
	int i,count,x,y;
	int sum=0;
	//输入 
	scanf("%c",&a[0]);
	for(i=1;a[i-1]!='\n';i++)
	{
		scanf("%c",&a[i]);
	}
	count=i-1;
	//移动前的字符串 
	x=a[count-1];
	y=a[count-2];
	for(i=count-3;i>=0;i--)
	{
		a[i+2]=a[i];
	}
	a[1]=x;
	a[0]=y;
	//将移动前十六进制数字减5后，将十六进制中的字母转化为数字，如 A=10 
	for(i=0;i<count;i++)
	{
		if(a[i]>=53&&a[i]<=57)
		b[i]=a[i]-53;
		else if(a[i]>=49&&a[i]<=52)
		b[i]=a[i]-37;
		else
		b[i]=a[i]-60;
	}
	//转化为十进制 
	for(i=0;i<count;i++)
	{
		sum=sum*16+b[i];
	}
	//输出 
	int day,month,year;
	day=sum%100;
	month=sum/100%100;
	year=sum/10000;
	printf("%d年%d月%d日\n",year,month,day);
	return 0;
}
