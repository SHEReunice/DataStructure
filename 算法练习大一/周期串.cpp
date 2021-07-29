#include<stdio.h>
#include<string.h> 
int main()
{
	char a[81];
	int b[81];
	int i,t=1;
	scanf("%s",a);
	for(i=0;i<strlen(a);i++)
	{
		if(i>0&&a[i%t]!=a[i])
		t=i+1;
	}
	printf("%d",t);
	return 0;
 } 
