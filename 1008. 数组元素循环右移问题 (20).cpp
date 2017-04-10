#include <stdio.h>
int swap(int *p,int *q);
int main()
{
	int N,move;
	//N控制输入的数的个数
	//move控制移动的次数 
	scanf("%d %d",&N,&move);
	int number[N];
	for(int cnt=0;cnt<N;cnt++){
		scanf("%d",&number[cnt]);
	}//将数字记入数组 
    for(int i=0;i<move;i++){
    	for(int n=0;n<N-1;n++){
    		swap(&number[n],&number[N-1]);
		}//第一重完成一次交换 
	}//第二重完成move次交换 
	for(int count=0;count<N;count++){
		printf("%d",number[count]);
		if(count<N-1)
			printf(" ");
	}//输出交换后的数组最 
}    //后一个数后不要空格

int swap(int *p,int *q)
{    //一个交换两个数的函数 
	int t;
	t=*p;
	*p=*q;
	*q=t;
}
