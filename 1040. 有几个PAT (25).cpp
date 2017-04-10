/*1040. 有几个PAT (25)*/
#include <stdio.h>
#include <string.h>
int main()
{
	int T[100010]={0},P[100010]={0};//A后找T,A前找P 
	char string[100010];
	scanf("%s",string);
	int lenstr = strlen(string);
	for(int i=lenstr-1;i>=0;i--){
		if(string[i]=='T')//A后找T 
			T[i-1]++;
		T[i-1]+=T[i];
	}
	for(int i=0;i<=lenstr-1;i++){
		if(string[i]=='P')//A前找P
			P[i+1]++;
		P[i+1]+=P[i];
	}
	long long sum = 0;//sum会超出int的取值范围 
	for(int i=0;i<lenstr;i++){
		if(string[i]=='A'){//找A并计算 
			sum += P[i]*T[i];
		}
	}
	int pat = sum%1000000007;//求余数 
	printf("%d",pat);
}//时间复杂度O(n),最优算法 

