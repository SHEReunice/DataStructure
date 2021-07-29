/* 玛雅使用两种日历，第一种称为Haab，一年为365天，一年分为19个月，前18个月每个月都是20天，第19个月为5天，每一个月都有一个名字，分别为pop, no, zip, zotz, tzec, xul, yoxkin, mol, chen, yax, zac, ceh, mac, kankin, muan, pax, koyab, cumhu和uayet，每个月份中的天数用0到19表示。最后一个月份中的天数用0到4表示。玛雅使用的第二个日历称为Tzolkin，在这个日历中，一年为260天，一年分为13段，每段20天（260=13*20），每一天用一个数字和一个名字表示，总共20个名字：
 imix, ik, akbal, kan, chicchan, cimi, manik, lamat, muluk, ok, chuen, eb, ben, ix, mem, cib, caban, eznab, canac, ahau，数字为1到13，数字和名字都顺序循环，例如，第一年开始的几天为：1 imix, 2 ik, 3 akbal, 4 kan, 5 chicchan, 6 cimi, 7 manik, 8 lamat, 9 muluk, 10 ok, 11 chuen, 12 eb, 13 ben,
 1 ix, 2 mem, 3 cib, 4 caban, 5 eznab, 6 canac, 7 ahau, 然后进入下一段 8 imix, 9 ik, 10 akbal...
现在的任务是要将一个Haab日历格式的日期转换为Tzolkin日历格式的日期。年份从0开始，从日期开始点开始，第一天在两种日历中分别为：
Haab：0. pop 0
Tzolkin: 1 imix 0
解题思路：
1 先将输入的日期转换为从第一天到该日期的总共天数：
days= year*365+month*20+date+1 
2 根据days求出Tzolkin日历格式的年份，月份，天数
year = days/260;
Tz_days = days%260;  //最后那年的天数
数字=Tz_days%13; (如果为0的话，应当是13)
天名字下标=Tz_days%20;（如果是0的话，应该是20）注意：这里有一个坑，如果Tz_days==0的话，证明最后那年的天数为0，那这个日期就是上一年的最后一天，所以年数要减1
证明这个例子的测试用例：
> 4. uayet 259
> 正解是 13 ahau 364
> 而不是13 ahau 365
*/


//数组比较大开在main函数的外面，要不然会错误退出 

#include<stdio.h>
#include<string.h> 
int n,m;
int day[100001],i;
int date[10001],year[100001],month[100001];
char habmonth[100001][10];
int tzdate[100001],tzyear[100001],tzdays[100001],tzmonth[100001];
int main()
{
char haab[19][10]={"pop", "no", "zip","zotz","tzec","xul",
"yoxkin","mol","chen","yax","zac","ceh","mac","kankin","muan","pax",
"koyab","cumhu","uayet"};
char tz[20][10]={"imix","ik","akbal","kan",
"chicchan","cimi","manik","lamat","muluk",
"ok","chuen","eb","ben","ix","mem",
"cib","caban","eznab","canac","ahau"};


scanf("%d",&n);
m=n;
while(n--)
{
scanf("%d. %s %d",&date[n],habmonth[n],&year[n]);
for(i=0;i<19;i++)
{
	if(strcmp(haab[i],habmonth[n])==0)
    month[n]=i;
  
}
day[n]=year[n]*365+date[n]+1+month[n]*20;
tzyear[n]=day[n]/260;
tzdays[n]=day[n]%260;
if(tzdays[n]==0)
tzyear[n]--;
tzdate[n]=tzdays[n]%13;
if(tzdate[n]==0)
tzdate[n]=13;
tzmonth[n]=tzdays[n]%20;
if(tzmonth[n]==0)
tzmonth[n]=20;	

}
printf("%d\n",m);
while(m--)
printf("%d %s %d\n",tzdate[m],tz[tzmonth[m]-1],tzyear[m]);

return 0;



	
 } 
