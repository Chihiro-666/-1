#include <stdio.h>
//递归求逆序 
int function(char ch)
{
	int a=ch;
	printf("%d",a%10);
	if(a/10!=0)
	return (function(a/10));
}
int main()
{
	char s1[100],s2[100],s[100],a[100],b[100];
	char head[100],end[100];
	int i,j,k,num1,num2,num,cun,x,y,h,e,result;
	num1=num2=num=cun=0;
	s1[0]=s2[0]=s[0]=head[0]=end[0]=a[0]=b[0]=0;
	//输入 
	for(i=1;s1[i-1]!='\n';i++)
	{
		scanf("%c",&s1[i]);
		num1++;
	}
	num1-=1;
	for(i=1;s2[i-1]!='\n';i++)
	{
		scanf("%c",&s2[i]);
		num2++;
	}
	num2-=1;
	for(i=1;s[i-1]!='\n';i++)
	{
		scanf("%c",&s[i]);
		num++;
	}
	num-=1;
	//比较s1和s2的字符串大小 ，确定帧头和帧尾 
	for(i=1;i<=num1&&i<=num2;i++)
	{
		if(s1[i]<s2[i])
		{
			for(j=1;j<=num1;j++)
			{
				head[j]=s1[j];
			}
			h=num1;
			for(j=1;j<=num2;j++)
			{
				end[j]=s2[j];
			}
			e=num2;
			break;
		}
		else if(s2[i]<s1[i])
		{
			for(j=1;j<=num2;j++)
			{
				head[j]=s2[j];
			}
			h=num2;
			for(j=1;j<=num1;j++)
			{
				end[j]=s1[j];
			}
			e=num1;
			break;
		}
	} 
	//查找s字符串中的帧头和帧尾 
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=h;j++)
		{
			if(s[i]==head[j])
			i=i+1;
			else
			break;
		}
		if(j>h)
		{
			x=i-1;
			break;
		}
	}
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=e;j++)
		{
			if(s[i]==end[j])
			i=i+1;
			else
			break;
		}
		if(j>e)
		{
			y=i-1;
			break;
		}
	}
	if((y-x)==e||(x-y)==h)
	printf("NONE\n");
	else if(x<y)
	{
		for(i=1;i<=y-x-e;i++)
		{
			a[i]=s[x+i];
		}
		cun=y-x-e;
	}
	else if(x>y)
	{
		j=1;
		for(i=x-e;i>y;i--)
		{
			a[j]=s[i];
			j++;
		}
		cun=x-y-h;
	}
	else
	printf("ERROR\n");
	//将s字符串大小写转换 
	for(i=1;i<=cun;i++)
	{
		if(a[i]>='A'&&a[i]<='Z')
		a[i]=a[i]+32;
		else if(a[i]>='a'&&a[i]<='z')
		a[i]=a[i]-32;
	}
	//大小写转换后将帧头和帧尾中间英文字母部分充入数组b[] 
	j=1;
	for(i=1;i<=cun;i++,j++)
	{
		
		if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
		{
			b[j]=a[i];
		}
		else
		{
			j--;
		}
	}
	k=j-1;
	//反转数字并逆序输出 
	for(i=k;i>1;i--)
	{
		if(b[i]<'d')
		{
			result=function(b[i]);
			printf("0");
		}
		else
		result=function(b[i]);
	} 
	//舍去最终结果末尾的零 
	int q=b[1];
	while(q%10!=0)
	{
		printf("%d",q%10);
		q=q/10;
	}
	return 0;
}
