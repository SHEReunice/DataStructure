#include <stdio.h>
int n,m[110];//n�������֣�mС������ 
int main()
{
    int a,b,c,i,k=0;
    while(scanf("%d%d%d",&a,&b,&c)&&a&&b&&c)
	{
        k++;
        n=a/b;
        a=a%b;
        m[0]=0;//ʮ��λС�������Խ�λΪ���� 
        for(i=1;i<=c;i++)
		{
            m[i]=a*10/b;
            a=a*10%b;
        }
        if(a*10/b>=5)//��C+1λ����������
		{
            for(i=c;i>=0;i--)//��λ���� 
			{
                m[i]=m[i]+1;
                if(m[i]<10)
                    break;//�������ڽ�λ������ѭ���� 
                else
                    m[i]-=10;
            } 
        }
        n=n+m[0];//�������ֽ�λ���� 
        printf("Case %d: %d.",k,n);//��ӡ�������ּ�С����
        for(i=1;i<=c;i++)
            printf("%d",m[i]);//��ӡС�����֡� 
        printf("\n");
    }
    return 0;
    } 
