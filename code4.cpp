#include <stdio.h>
int Function(int a[],int cun)
{
 int i,j,t;
 for (i=0; i<cun-1; i++)
 {
  for (j=0; j<cun-1-i;j++)
     {
   if(a[j]>=a[j+1])
      { 
    	t=a[j];
       	a[j]=a[j+1];
        a[j+1]=t;
      }
    }
 }
}
int main()
{
 int x;
 int m,n;
 int cun=0;
 int a[100];
 //输入 
 scanf("%d %d",&m,&n);
 while(cun<n)
 {
  scanf("%d",&x);
  a[cun]=x;
  cun++; 
 }
 //排序 
 int i;
 int b[m-1];
 for(i=0;i<cun;i++)
 {
  if(i<m)
  {
    b[i]=a[i];
  }
  else
  {
   Function(b,m);
   b[0]=a[i]+b[0];
  }  
 }
 Function(b,m);
 printf("%d",b[m-1]);
 return 0;
}
