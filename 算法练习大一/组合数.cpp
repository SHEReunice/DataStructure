/*��д�����������������Ǹ�����n��m,
���������n!/(m!(n-m)!,����m<=n<=25,
���磬n=25��m=12ʱ��Ϊ5200300*/ 

#include<stdio.h> 
long long C(int n,int m)
{
	if(m<n-m)m=n-m;//ֱ����n�Ľ׳�����̫����ܻ���� 
	long long ans=1;
	for(int i=m+1;i<=n;i++) ans*=i;
	for(int i=1;i<=n-m;i++) ans/=i;
	return ans;
}
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	printf("%lld ",C(n,m));
	return 0;
}

