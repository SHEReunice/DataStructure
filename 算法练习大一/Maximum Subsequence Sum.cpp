#include<stdio.h>
int a[100001];
int main()
{
	int k,thiss[100001],front,rear;  //front表示要输出的子序列的第一个，rear表示最后一个
	long long thissum=0,maxsum=-1;   //先让maxsum等于-1，如果都是负数它就变为0，如果有最大值它更新为最大值
	scanf("%d",&k);
	int i,j=0,flag=0; //flag用于判断序列中是不是都是负数
	for(i=0;i<k;i++)
	{
	scanf("%d",&a[i]);
	thissum+=a[i];
	thiss[j]=a[i];  //每次子序列的第一个存到thiss[0],然后每次往后加一个，
	               //子序列的另一端就更新一个，存到thiss数组里面
	if(a[i]>=0)
	flag=1;   //只要序列中出现一个非负数，flag更新为1
	if(thissum>maxsum)
	{
		maxsum=thissum;   //maxsum更新最大值
		front=thiss[0];   //子序列的第一个存到front
		rear=thiss[j];    //子序列的最后一个存到rear
	}
	j++;   //数组下标往后加一个，因为前面要存到rear里面，
	      //用j-1不方便，可能存在j就是第一个的情况，所以在上面的判断以后在这里再让j加一
	if(thissum<0)
	{
		thissum=0;   //thissum变成负值，更新数组，从下一次作为新的子序列的第一个开始加
		j=0;	
	}
	}
	if(flag==0)  //所有元素都是负数
	{
	maxsum=0;
	front=a[0];  
	rear=a[k-1];
	}
	printf("%lld %d %d",maxsum,front,rear);
	return 0;
	
	
 } 
