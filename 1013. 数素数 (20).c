﻿/*1013. 数素数 (20)*/
/*
令Pi表示第i个素数。现任给两个正整数M<=N<=104，
请输出PM到PN的所有素数。

输入格式：

输入在一行中给出M和N，其间以空格分隔。

输出格式：

输出从PM到PN的所有素数，每10个数字占1行，其间以
空格分隔，但行末不得有多余空格。

输入样例：
5 27
输出样例：
11 13 17 19 23 29 31 37 41 43
47 53 59 61 67 71 73 79 83 89
97 101 103
*/

/*
在编程中以下几类做法容易导致段错误,基本上是错误
地使用指针引起的。
1)访问系统数据区，尤其是往系统保护的内存地址写
数据最常见就是给一个指针以0地址。
2)内存越界(数组越界，变量类型不一致等)： 访问到
不属于你的内存区域。
*/

#include <stdio.h>
#include <math.h>
int main()
{
	int M,N,prime[10000];
	//最多计算10000个素数 
	int i,cnt,n=0;
	scanf("%d %d",&M,&N);
	for(cnt=2; ;cnt++){
		for(i=2;i<=sqrt(cnt);i++){
			if(cnt%i==0){
				break;
			} 
		}//数素数并写入数组 
		if(i>sqrt(cnt)){
			prime[n++]=cnt;
			if(n>=N)
				break;
		//数到第N个素数就停止 
		}
	}
	for(cnt=M-1;cnt<N;cnt++){
		printf("%d",prime[cnt]);
		if((cnt-M+2)%10!=0 && cnt!=N-1)
		//所有数最后和每一行最后不输出空格 
			printf(" ");
		else
			if(cnt!=N-1)
		//刚好整行时不回车 
			printf("\n");
	}
	return 0;
}
 
