/*��һ�����Ľ׳˸�������أ�
�����ֺ�С��ʱ��Ȼ�ܺü��㣬
�������ֺܴ��ʱ���أ�
�ͱ�������� 100! ,
���ʱ����Ѿ�������int�ķ�Χ�ˣ�
���ʱ����õ���һ���㷨�������㷨�� 
����˵������������ģ��������������̡�
������һ��str��������Ž׳˵�ÿһλ���֣�
��str[0]=1;λ��Ϊ1��
��ÿ�εĳ˻�����һ�������洢������
Ȼ���ٽ��˻�ͨ����10ȡ�������µ������У�
ֱ�������е������˻�����
��ʼ����λ���Լ�ÿһλ������(��10ȡ���ȡ��)��*/ 


#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int str[4000];
    int n;
    while(cin>>n)
    {
        str[0]=1;
        long long carry=0; // ��λ��
        long long flag=1; // λ��
        for (int i=2;i<=n;i++)
        {
            long long res=0;
            for (int j=0;j<flag;j++)  
            {
                res=str[j]*i+carry;  // �˻��Ľ��
                str[j]=res%10;     
                carry=res/10;  // �����λ����
            }
            while (carry)  // ����λ��
            {
                flag++;   // λ��
                str[flag-1]=carry%10;
                carry/=10;
            }
        }
        for (int i=flag-1;i>=0;i--)
            cout<<str[i];
        cout<<endl;
    }
    return 0;
}
