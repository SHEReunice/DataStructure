#include<stdio.h>
int a[100001];
int main()
{
	int k,thiss[100001],front,rear;  //front��ʾҪ����������еĵ�һ����rear��ʾ���һ��
	long long thissum=0,maxsum=-1;   //����maxsum����-1��������Ǹ������ͱ�Ϊ0����������ֵ������Ϊ���ֵ
	scanf("%d",&k);
	int i,j=0,flag=0; //flag�����ж��������ǲ��Ƕ��Ǹ���
	for(i=0;i<k;i++)
	{
	scanf("%d",&a[i]);
	thissum+=a[i];
	thiss[j]=a[i];  //ÿ�������еĵ�һ���浽thiss[0],Ȼ��ÿ�������һ����
	               //�����е���һ�˾͸���һ�����浽thiss��������
	if(a[i]>=0)
	flag=1;   //ֻҪ�����г���һ���Ǹ�����flag����Ϊ1
	if(thissum>maxsum)
	{
		maxsum=thissum;   //maxsum�������ֵ
		front=thiss[0];   //�����еĵ�һ���浽front
		rear=thiss[j];    //�����е����һ���浽rear
	}
	j++;   //�����±������һ������Ϊǰ��Ҫ�浽rear���棬
	      //��j-1�����㣬���ܴ���j���ǵ�һ���������������������ж��Ժ�����������j��һ
	if(thissum<0)
	{
		thissum=0;   //thissum��ɸ�ֵ���������飬����һ����Ϊ�µ������еĵ�һ����ʼ��
		j=0;	
	}
	}
	if(flag==0)  //����Ԫ�ض��Ǹ���
	{
	maxsum=0;
	front=a[0];  
	rear=a[k-1];
	}
	printf("%lld %d %d",maxsum,front,rear);
	return 0;
	
	
 } 
