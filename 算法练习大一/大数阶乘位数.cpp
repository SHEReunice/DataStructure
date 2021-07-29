#include<stdio.h>
#include<math.h>
#define pi 3.1415926535898
#define e 2.718281828459
int main(void)
{
	    long long n;
        long long i;
        long long m;
        double sum;
        scanf("%lld",&n);
	for(i=0;i<n;i++)
	{
	scanf("%lld",&m);
	sum=log10(sqrt(2*pi*m))+m*log10(m/e); 
	printf("%lld\n",(long long)sum+1);
	}
	return 0;
} 
