/*1008. 数组元素循环右移问题 (20)*/
/*
一个数组A中存有N(N>0)个整数，在不允许使用
另外数组的前提下，将每个整数循环向右移M
(M>=0)个位置，即将A中的数据由(A0 A1…AN-1)
变换为(AN-M … AN-1 A0 A1…AN-M-1)（最后M个
数循环移至最前面的M个位置）。如果需要考虑程
序移动数据的次数尽量少，要如何设计移动的方法？

输入格式：每个输入包含一个测试用例，第1行输入
N ( 1<=N<=100)、M（M>=0）；第2行输入N个整数，
之间用空格分隔。

输出格式：在一行中输出循环右移M位以后的整数序
列，之间用空格分隔，序列结尾不能有多余空格。

输入样例：
6 2
1 2 3 4 5 6
输出样例：
5 6 1 2 3 4
*/

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
 
