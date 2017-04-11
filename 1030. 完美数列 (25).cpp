#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,p;//正整数的个数、给定的参数 
    scanf("%d %d",&n,&p);
    int num[n];
    for(int i=0;i<n;i++){
    	scanf("%d",&num[i]);
	}
	sort(num,num+n);
	int count = 1,i = 0,j = 0;
	while(i<n && j<n){//控制i和j的距离最大 
		while(j<n && num[j]<=(long long)num[i]*p){//max<=min*p
			count = max(count,j-i+1);
			j++;
		}
		i++; 
	}
    printf("%d",count);
 } 
