#include<stdio.h>
char n;
int main()
{
	int a[10]={0};
    int i=0;
    while((n=getchar())!=EOF)
    {
    	if(n=='\n')
    	break;
    	a[n-'0']++;
    	
	}
    
    for(i=0;i<=9;i++)
    printf("%d\n",a[i]);
return 0;
}
