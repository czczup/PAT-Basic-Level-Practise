/*1007. 素数对猜想 (20)*/
/*
让我们定义dn为：dn=pn+1-pn，其中pi是第i个素数。
显然有 d1=1 且对于n>1有dn是偶数。“素数对猜想”
认为“存在无穷多对相邻且差为2的素数”。

现给定任意正整数N (< 105)，请计算不超过N的满足
猜想的素数对的个数。

输入格式：每个测试输入包含1个测试用例，给出正
整数N。

输出格式：每个测试用例的输出占一行，不超过N的
满足猜想的素数对的个数。

输入样例：
20
输出样例：
4
*/

#include <stdio.h>
#include <math.h>
int main()
{
	int num,cnt,n,N;
	//num是第一重循环的给定数
	//cnt是判断是否为素数的计数器
	//n是筛选素数对的计数器
	//N是给定的最大数 
	scanf("%d",&N);
	int prime[10000]={0};
	//猜想100000个数中最多有10000个素数 
	int count=0;
	//count是记录数组的控制计数器 
	for(num=2;num<=N;num++){//给定数递增 
		for(cnt=2;cnt<=sqrt(num);cnt++){
		//判断数递增 
			if(num%cnt==0){
				break;
			}
		}
		if(cnt>sqrt(num)) {
		//比较数的最终数的大小来判断是不是素数
		//合数提前终止循环cnt不会大于sqrt(num) 
		//是素数则记入数组 
			prime[count]=num;
			count++;
		//	printf("%d\n",prime[count-1]);
		}
		
	}
	for(cnt=0,n=0;cnt<9999;cnt++){
		if(prime[cnt+1]-prime[cnt]==2){
		//如果差为2，则计数器+1 
		//printf("prime[%d]-prime[%d]=%d-%d=2\n",\
		cnt+1,cnt,prime[cnt+1],prime[cnt]);
			n++; 
			
		} 
	}
	printf("%d",n);
	return 0;
 } 
