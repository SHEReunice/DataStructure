/*  ��nյ�ƣ����Ϊ1��n��
��һ���˰����еƴ򿪣�
�ڶ����˰������б��Ϊ2�ı����Ŀ��أ���Щ�Ʊ��ص�����
��3���˰������б��Ϊ3�ı����Ŀ���
�����йص��ĵƽ����򿪣����ŵĵƽ����رգ���
�������ơ�һ����k���ˣ����������Щ�ƿ���?
����n��k��������ŵĵƵı�š�k<=n<=1000�� */

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
