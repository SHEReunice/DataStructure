#include<stdio.h>
void swap(char *p,char *q)
{
	char t;
	t=*q;
	*q=*p;
	*p=t;
}
int main()
{
	char a[5][5];
	char order;
	int flag=0;
	int i,j,m,n;
	for(i=0;i<5;i++)
	{
		gets(a[i]);
			for(j=0;j<5;j++)
			{
			if(a[i][j]==' ')
		   {
		
			m=i;
			n=j;	
			}
		}
		
	}

	
	while((order=getchar())!=EOF)
	{
		if(order=='0')
		break;
		if(order=='A')
		{
			if(m-1<0)
			{
				flag=1;
				break;
			}
			else
			{
				swap(&a[m][n],&a[m-1][n]);
				m--; 
			}
		}
		else if(order=='L')
		{
			if(n-1<0)
			{
				flag=1;
				break;
			}
			else
			{
				swap(&a[m][n],&a[m][n-1]);
				n--;	
			}
		}
		else if(order=='B')
		{
			if(m+1>4)
			{
				flag=1;
				break;
			}
			else
			{
				swap(&a[m][n],&a[m+1][n]);
				m++;
			}
		}
		else if(order=='R')
		{
			if(n+1>4)
			{
				flag=1;
				break;
			}
			else
			{
				swap(&a[m][n],&a[m][n+1]);
				n++;
			}
		}
		
	}
	for(i=0;i<5;i++)
	{
		puts(a[i]);
		printf("\n");
	}
	return 0;
}
