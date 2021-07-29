#include<stdio.h>
int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int x,n=0,min,max,s=0;
	while(scanf("%d",&x)==1)
	{
		s+=x;
		if(x<min) min=x;
		if(x>max) max=x;
		n++;
	}
	printf("%d %d %.3f",min,max,(double)s/n);
	return 0;
	
 } 
