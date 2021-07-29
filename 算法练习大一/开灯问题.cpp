/*  有n盏灯，编号为1到n。
第一个人把所有灯打开，
第二个人按下所有编号为2的倍数的开关（这些灯被关掉），
第3个人按下所有编号为3的倍数的开关
（其中关掉的灯将被打开，开着的灯将被关闭），
依次类推。一共有k个人，问最后有那些灯开着?
输入n和k，输出开着的灯的编号。k<=n<=1000。 */

#include<stdio.h>
#include<string.h>
#define max 1010
int a[max];
int main()
{
   int n,k,first=1;
   memset(a,0,sizeof(a));
   scanf("%d%d",&n,&k);
   for(int i=1;i<=k;i++)
   for(int j=1;j<=n;j++)
   if(j%i==0)a[j]=!a[j];
   for(int i=1;i<=n;i++)
   if(a[i]) 
   {
   	if(first) first=0;
   	else printf(" ");
   	printf("%d",i);
   }
   printf("\n");
   return 0;
 } 
