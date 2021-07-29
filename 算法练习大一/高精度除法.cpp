/*输入正整数a，b ,c ,输出a/b的小数形式 ，
精确到小数点后c位 ，a，b<=10^6 ,c<100
	1 6 4
	Case 1:0.1667
	0 0 0
	Press any key to continue  
    
	算法思想： 模拟手工算式除法
                                     
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
			if(c == 0 && (a % b) * 10 / b >= 5) q++; //四舍五入
			printf("%d", q);
			a %= b;
		}
		printf("\n");
 
 
 
	}
 
	return 0;
}

