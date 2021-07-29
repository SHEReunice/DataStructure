/*输入两个正整数 n < m < 10^6,
输出1/n^2+1/(n+1)^2+…+1/m^2,保留5位小数。
输入包含多组数据，结束标记为 n=m=0.
提示：本题有陷阱。

样例输入：

2 4
65536 655360
0 0

样例输出：

Case 1： 0.42361
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
 /*此题有陷阱，如果用1.0/(i*i)会溢出，另外，注意输出Case %d
 
 
