#include<stdio.h>
int main()
{
	int n,space,i;
	scanf("%d",&n);
	space=0;
	int j,l;
	for(i=n;i>0;i--)
	{
	for(j=1;j<=space;j++)
	printf(" ");
	for(l=1;l<=(2*i-1);l++)
	printf("#");
	for(j=1;j<=space;j++)
	printf(" ");
	printf("\n");
	space++;	
	}
	return 0;
 } 
