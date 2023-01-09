#include <stdio.h>
int main()
{
	char a[100];
	int b[100];
	int i,count,x,y;
	long int sum=0;
	scanf("%c",&a[0]);
	for(i=1;a[i-1]!='\n';i++)
	{
		scanf("%c",&a[i]);
	}
	count=i-1;
	x=a[count-1];
	y=a[count-2];
	for(i=count-3;i>=0;i--)
	{
		a[i+2]=a[i];
	}
	a[1]=x;
	a[0]=y;
	for(i=0;i<count;i++)
	{
		if(a[i]>=53&&a[i]<=57)
		b[i]=a[i]-53;
		else if(a[i]>=49&&a[i]<=52)
		b[i]=a[i]-37;
		else
		b[i]=a[i]-60;
	}
	for(i=0;i<count;i++)
	{
		sum=sum*16+b[i];
	}
	int day,month,year;
	day=sum%100;
	month=sum/100%100;
	year=sum/10000;
	printf("%d年%d月%d日\n",year,month,day);
	return 0;
}
