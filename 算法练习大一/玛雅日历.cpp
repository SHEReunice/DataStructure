/* ����ʹ��������������һ�ֳ�ΪHaab��һ��Ϊ365�죬һ���Ϊ19���£�ǰ18����ÿ���¶���20�죬��19����Ϊ5�죬ÿһ���¶���һ�����֣��ֱ�Ϊpop, no, zip, zotz, tzec, xul, yoxkin, mol, chen, yax, zac, ceh, mac, kankin, muan, pax, koyab, cumhu��uayet��ÿ���·��е�������0��19��ʾ�����һ���·��е�������0��4��ʾ������ʹ�õĵڶ���������ΪTzolkin������������У�һ��Ϊ260�죬һ���Ϊ13�Σ�ÿ��20�죨260=13*20����ÿһ����һ�����ֺ�һ�����ֱ�ʾ���ܹ�20�����֣�
 imix, ik, akbal, kan, chicchan, cimi, manik, lamat, muluk, ok, chuen, eb, ben, ix, mem, cib, caban, eznab, canac, ahau������Ϊ1��13�����ֺ����ֶ�˳��ѭ�������磬��һ�꿪ʼ�ļ���Ϊ��1 imix, 2 ik, 3 akbal, 4 kan, 5 chicchan, 6 cimi, 7 manik, 8 lamat, 9 muluk, 10 ok, 11 chuen, 12 eb, 13 ben,
 1 ix, 2 mem, 3 cib, 4 caban, 5 eznab, 6 canac, 7 ahau, Ȼ�������һ�� 8 imix, 9 ik, 10 akbal...
���ڵ�������Ҫ��һ��Haab������ʽ������ת��ΪTzolkin������ʽ�����ڡ���ݴ�0��ʼ�������ڿ�ʼ�㿪ʼ����һ�������������зֱ�Ϊ��
Haab��0. pop 0
Tzolkin: 1 imix 0
����˼·��
1 �Ƚ����������ת��Ϊ�ӵ�һ�쵽�����ڵ��ܹ�������
days= year*365+month*20+date+1 
2 ����days���Tzolkin������ʽ����ݣ��·ݣ�����
year = days/260;
Tz_days = days%260;  //������������
����=Tz_days%13; (���Ϊ0�Ļ���Ӧ����13)
�������±�=Tz_days%20;�������0�Ļ���Ӧ����20��ע�⣺������һ���ӣ����Tz_days==0�Ļ���֤��������������Ϊ0����������ھ�����һ������һ�죬��������Ҫ��1
֤��������ӵĲ���������
> 4. uayet 259
> ������ 13 ahau 364
> ������13 ahau 365
*/


//����Ƚϴ���main���������棬Ҫ��Ȼ������˳� 

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
