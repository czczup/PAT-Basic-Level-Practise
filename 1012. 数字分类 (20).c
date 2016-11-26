﻿/*1012. 数字分类 (20)*/
/*
给定一系列正整数，请按要求对数字进行分类，并输出
以下5个数字：

A1 = 能被5整除的数字中所有偶数的和；
A2 = 将被5除后余1的数字按给出顺序进行交错求和，即
计算n1-n2+n3-n4...；
A3 = 被5除后余2的数字的个数；
A4 = 被5除后余3的数字的平均数，精确到小数点后1位；
A5 = 被5除后余4的数字中最大数字。

输入格式：

每个输入包含1个测试用例。每个测试用例先给出一个不
超过1000的正整数N，随后给出N个不超过1000的待分类
的正整数。数字间以空格分隔。

输出格式：

对给定的N个正整数，按题目要求计算A1~A5并在一行中
顺序输出。数字间以空格分隔，但行末不得有多余空格。

若其中某一类数字不存在，则在相应位置输出“N”。

输入样例1：
13 1 2 3 4 5 6 7 8 9 10 20 16 18
输出样例1：
30 11 2 9.7 9
输入样例2：
8 1 2 4 5 6 7 9 16
输出样例2：
N 11 2 N 9
*/


#include <stdio.h>
int main(int argc,char* argv[]) 
{
	int N,A[5]={0},i=1,cnt1,cnt2=0,cnt3=0,num;
	scanf("%d",&N);
	//cnt1 控制循环
	//cnt2 A2计数
	//cnt3 A4计数 
	for(cnt1=0;cnt1<N;cnt1++){
		scanf("%d",&num);
		if(num%2==0 && num%5==0)
			A[0]+=num;
		if(num%5==1){
			A[1]+=i*num;
			i=-i;
			cnt2++;
		}
		if(num%5==2){
			A[2]++;
		} 
		if(num%5==3){
			A[3]+=num;
			cnt3++;
		}
		if(num%5==4){
			A[4]=A[4]>num?A[4]:num;
		}
	}
	for(cnt1=0;cnt1<5;cnt1++){
	//A2可以等于0，其他都不能等于0 
		if(A[cnt1]!=0)
			if(cnt1!=3)
				printf("%d",A[cnt1]);
			else
				printf("%.1f",A[cnt1]/(float)cnt3);
		else{
			if(cnt1==1 && cnt2!=0){
			//A2且记进数的量大于0 
				printf("%d",A[cnt1]);
			}
			else printf("N");
		}
		if(cnt1!=4)
			printf(" ");
		else
			printf("\n");	
	}
	return 0;
}
