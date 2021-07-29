#include<stdio.h>
#include<string.h>
int main()
{
	char a[81];
	int time=0,sum=0;
scanf("%s",a);
for(int i=0;i<strlen(a);i++)
	{
		if(a[i]=='O')
		time++;
		else if(a[i]=='X')
		time=0;
		sum+=time;
	}
	printf("%d",sum);
	return 0;
 } 
