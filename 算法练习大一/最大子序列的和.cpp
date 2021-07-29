#include<stdio.h>
int a[100001];
int main()
{
	int k;
	long long thissum=0,maxsum=0;
	scanf("%d",&k);
	int i;
	for(i=0;i<k;i++)
	{
	scanf("%d",&a[i]);
	thissum+=a[i];
	if(thissum>maxsum)
	maxsum=thissum;
	else if(thissum<0)
	thissum=0;	
	}
	printf("%d",maxsum);
	return 0;
	
	
 } 
