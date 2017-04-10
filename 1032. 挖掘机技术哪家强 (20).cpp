#include <stdio.h>
int main()
{
	int n,max=0,index=0;
	int school[100001]={0};//最坏情况有10^5所学校 
	scanf("%d",&n);
	while(n--){
		int num,score;
		scanf("%d %d",&num,&score);
		school[num]+=score;
		if(school[num]>max){
			max = school[num];
			index = num;//记录下标 
		}//在记录数据的同时选出最大值 
	} 
	printf("%d %d",index,school[index]);
}

