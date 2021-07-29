#include<stdio.h>
int board[21][21];
int m,n;
int bang(int x,int y,int kill)
{
	if(x>=0&&y>=0&&x<m&&y<n&&board[x][y]>0)
	{
		board[x][y]-=kill;
		if(board[x][y]<=0)
		return 1;
		else return 0;
	}
	return 0;
}
int main()
{
	scanf("%d%d",&m,&n);
	getchar();
	int i,j;
	for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	{
		board[i][j]=getchar()=='0'?0:2;
	}
	getchar();	
	}
	int k;
	int x,y;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d%d",&x,&y);
		int count=0;
		count+=bang(x,y,2);
		count+=bang(x-1,y,1);
		count+=bang(x+1,y,1);
		count+=bang(x,y-1,1);
		count+=bang(x,y+1,1);
		printf("%d\n",count);		
		}	
		return 0; 
 } 
