/*编写函数，参数是两个非负整数n和m,
返回组合数n!/(m!(n-m)!,其中m<=n<=25,
例如，n=25，m=12时答案为5200300*/ 

#include<stdio.h> 
long long C(int n,int m)
{
	if(m<n-m)m=n-m;//直接算n的阶乘数据太大可能会溢出 
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

