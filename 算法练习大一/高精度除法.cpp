/*����������a��b ,c ,���a/b��С����ʽ ��
��ȷ��С�����cλ ��a��b<=10^6 ,c<100
	1 6 4
	Case 1:0.1667
	0 0 0
	Press any key to continue  
    
	�㷨˼�룺 ģ���ֹ���ʽ����
                                     
 */ 

#include<stdio.h> 
int main()
{
	int a, b, c;
	int kbase = 0;
	while (scanf("%d%d%d",&a, &b, &c) == 3 && a && b && c)
	{
		printf("Case %d:%d.",++kbase, a / b);
		a %= b;
		while(c--) 
		{
			a *= 10;
			int q = a / b;
			if(c == 0 && (a % b) * 10 / b >= 5) q++; //��������
			printf("%d", q);
			a %= b;
		}
		printf("\n");
 
 
 
	}
 
	return 0;
}

