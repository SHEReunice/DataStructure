/*�������������� n < m < 10^6,
���1/n^2+1/(n+1)^2+��+1/m^2,����5λС����
��������������ݣ��������Ϊ n=m=0.
��ʾ�����������塣

�������룺

2 4
65536 655360
0 0

���������

Case 1�� 0.42361
Case 2: 0.00001
 */


#include<stdio.h>
int main()
{
	int m,n,i,k=0;
	double sum;
	while((scanf("%d%d",&n,&m))!=EOF)
	{
		sum=0;
		if(m==0&&n==0)
		break;
		for(i=n;i<=m;i++)
		sum+=1.0/i/i;
		k++;
		printf("Case %d: %.5f\n",k,sum);
	}
	return 0;
 } 
 /*���������壬�����1.0/(i*i)����������⣬ע�����Case %d
 
 
