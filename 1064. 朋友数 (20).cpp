#include <stdio.h>
int main()
{
	//输入部分
	int N;
	scanf("%d",&N);
	int FriNum[N],FriSum[37] = {0}; //下标表示朋友证号
	for(int i=0;i<N;i++){
		scanf("%d",&FriNum[i]);
	}
	
	//对每一个数字计数
	for(int i=0;i<N;i++){
	    int sum = 0;
	    while(FriNum[i]!=0){
	    	sum += FriNum[i] % 10;
	        FriNum[i] = FriNum[i] / 10;
		}
	    FriSum[sum] += 1;
	}
	
	//查找非零项
	int result[37] = {0},j=0;
	for(int i=0;i<37;i++)
	    if(FriSum[i] != 0)
	        result[j++] = i;
	
	//输出部分
	printf("%d\n",j);
	printf("%d",result[0]);
	for(int i=1;i<j;i++)
	    printf(" %d",result[i]);
}

