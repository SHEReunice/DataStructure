#include <stdio.h>
#include <algorithm>

int main(){
    int n,lenth,d[100000]={},i,c,any;
    char in;
    scanf("%d",&n);
	for(i=0;i<n;++i){
		lenth=0;
		while(lenth<7){
			in=getchar();
			if(in=='-'||in=='Q'||in=='Z'||in=='\n') continue;
			d[i]*=10;
			lenth++;
			if(in<='9') d[i]+=in-'0';
			else if(in<'Q') d[i]+=2+(in-'A')/3;
			else d[i]+=7+(in-'Q')/3;
		}
	}
	std::sort(d,d+n);
	any=0;
	for(i=1;i<n;++i){
		c=1;
		while(i<n&&d[i]==d[i-1]){
			++i;
			++c;
		}
		if(c>1){
			printf("%03d-%04d %d\n",d[i-1]/10000,d[i-1]%10000,c);
			any=1;
		}
	}
	if(any==0){
		printf("No duplicates.\n");
	}
}
