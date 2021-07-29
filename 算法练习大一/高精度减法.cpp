#include<stdio.h>
int main()
{
	int a[100],b[100],sum[1000];
	int i=0;
	int carry=0;
	while((scanf("%1d",&a[i]))!=EOF)
	{
		if(a[i]=='\n')
		break;
		i++;
	}
	i=0;
	while((scanf("%1d",&b[i]))!=EOF)
	{
		if(b[i]=='\n')
		break;
		i++;
	}
	int j=i;
	for(i=0;i<j;i++)
	{
		int s=a[i]+b[i]+carry;
		carry=s>=10;
		sum[i]=s%10;
	}
	for(i=j;i>=0;i--)
		printf("%d",sum[i]);
		putchar('\n');
		return 0;
 } 
