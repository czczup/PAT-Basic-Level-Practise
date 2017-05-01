﻿#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int N;
	scanf("%d",&N);
	int left[N]={0},right[N]={0},num[N];
	for(int i=0;i<N;i++)
		scanf("%d",&num[i]);
	/*从左往右判断*/
	int max = num[0];
	for(int i=0;i<N;i++)
		if(num[i]>=max){
			left[i] = 1;
			max = num[i];
		}
	/*从右往左判断*/
	int min = num[N-1];
	for(int i=N-1;i>=0;i--)
		if(num[i]<=min){
			right[i] = 1;
			min = num[i];
		}
	/*搜索两个'1'*/
	int cnt = 0;
	int result[N];
	for(int i=0;i<N;i++)
		if(left[i]==1 && right[i]==1)
			result[cnt++] = num[i];
	/*递增排序*/
	sort(result,result+cnt);
	/*输出*/
	printf("%d\n",cnt);
	int flag = 0;
	if(cnt == 0)
		printf("\n");
	else
		for(int i=0;i<cnt;i++)
			if(flag==0){
				printf("%d",result[i]);
				flag = 1;
			}else
				printf(" %d",result[i]);
}

