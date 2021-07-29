/*��Ϊ���������ܵúܿ죬ʱ�����Լ��㣬
�����ñ��⺯���ظ����г�ֶ��
ʹ�ò�����ܵ�ʱ�Ӵ������ֳ���
�����㱻�⺯��ƽ��ÿ�����е�ʱ�� */ 


#include<stdio.h>
#include<time.h>
#include<math.h>

clock_t start,stop;
double duration;
#define maxn 10  //����ʽ���������������ʽ����+1 
#define maxk 1e7  //���⺯������ظ����ô��� 

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
   double a[maxn];//�洢����ʽ��ϵ�� 
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

























