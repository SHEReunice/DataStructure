#include<stdio.h>
#include<string.h>
int main()
{
	FILE *fin,*fout;
	fin=fopen("data.in","rb");
	fout = fopen("data.out","wb"); 
	char wuzhi[100];
	fgets(wuzhi,100,fin);
	int i,j,len,weight[26]={0};
	double sum;
	len=strlen(wuzhi);
	for(i=0;i<len;i++)
	{
		if(wuzhi[i]<='Z'&&wuzhi[i]>='A')
		j=wuzhi[i]-'A';
		else
		weight[j]+=(wuzhi[i]-'0');
		if(wuzhi[i]<='Z'&&wuzhi[i]>='A'&&wuzhi[i+1]<='Z'&&wuzhi[i+1]>='A')
		weight[j]++;
		if(wuzhi[i]<='Z'&&wuzhi[i]>='A'&&i==len-1)
		weight[j]++;
	}
	sum=weight[2]*12.01+weight[7]*1.008+weight[14]*16.00+weight[13]*14.01;
	fprintf(fout,"%f",sum);
	fclose(fin);
	fclose(fout);
	return 0;
}
