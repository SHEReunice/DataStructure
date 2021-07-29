/*求一个数的阶乘该如何求呢，
当数字很小的时候当然很好计算，
但是数字很大的时候呢，
就比如上面的 100! ,
这个时候就已经超过了int的范围了，
这个时候就用到了一种算法，大数算法。 
简单来说，就是用数组模拟运算的整个过程。
首先用一个str数组来存放阶乘的每一位数字，
令str[0]=1;位数为1，
将每次的乘积先用一个变量存储起来，
然后再将乘积通过对10取余数更新到数组中，
直到将所有的数都乘积过后，
开始更新位数以及每一位的数字(对10取余或取整)。*/ 


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
        long long carry=0; // 进位数
        long long flag=1; // 位数
        for (int i=2;i<=n;i++)
        {
            long long res=0;
            for (int j=0;j<flag;j++)  
            {
                res=str[j]*i+carry;  // 乘积的结果
                str[j]=res%10;     
                carry=res/10;  // 计算进位的数
            }
            while (carry)  // 更新位数
            {
                flag++;   // 位数
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
