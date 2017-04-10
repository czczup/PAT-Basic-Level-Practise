#include <stdio.h>
int main()
{
	int N; 
	scanf("%d",&N);
	double list[N],sumlst = 0;
	for(int i=0;i<N;i++){ 
		scanf("%lf",&list[i]);
		sumlst += list[i]*(N-i)*(i+1);
	} 
	printf("%.2lf",sumlst);
}
/*
不能用求子列的方法计算和,会超时
用float类型最后两个测试点会出错 
*/
