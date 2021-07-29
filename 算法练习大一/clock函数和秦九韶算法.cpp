/*因为两个函数跑得很快，时间难以计算，
所以让被测函数重复运行充分多次
使得测出的总的时钟打点间隔充分长，
最后计算被测函数平均每次运行的时间 */ 


#include<stdio.h>
#include<time.h>
#include<math.h>

clock_t start,stop;
double duration;
#define maxn 10  //多项式最大项数，即多项式阶数+1 
#define maxk 1e7  //被测函数最大重复调用次数 

double f1(int n,double a[],double x)
{
	int i;
	double p = a[0];
	for(i=1;i<=n;i++)
	 p+=(a[i]*pow(x,i));
	return p;
}

double f2(int n,double a[],double x)
{
	int i;
	double p = a[n];
	for(i=n;i>0;i--)
	 p = a[i-1] + x*p;
	return p;
}

int main()
{
   int i;
   double a[maxn];//存储多项式的系数 
   for(i=0;i<maxn;i++) a[i] = (double)i;
   
   start = clock();
   for(i=0;i<maxk;i++)
   f1(maxn-1, a, 1.1);
   stop = clock();
   duration = ((double)(stop-start))/CLK_TCK/maxk;
   printf("ticks1 = %f\n",(double)(stop - start));
   printf("duration1 = %6.2e\n",duration);
   
   start = clock();
   for(i=0;i<maxk;i++)
   f2(maxn-1,a,1.1);
   stop = clock();
   duration = ((double)(stop-start))/CLK_TCK/maxk;
   printf("ticks2 = %f\n",(double)(stop - start));
   printf("duration2 = %6.2e\n",duration);
   
   return 0; 
    
}

























