/*1011. A+B和C (15)*/
/*
给定区间[-231, 231]内的3个整数A、B和C，请判
断A+B是否大于C。

输入格式：

输入第1行给出正整数T(<=10)，是测试用例的个数
。随后给出T组测试用例，每组占一行，顺序给出A
、B和C。整数间以空格分隔。

输出格式：

对每组测试用例，在一行中输出“Case #X: true”
如果A+B>C，否则输出“Case #X: false”，其中X
是测试用例的编号（从1开始）。

输入样例：
4
1 2 3
2 3 4
2147483647 0 2147483646
0 -2147483648 -2147483647
输出样例：
Case #1: false
Case #2: true
Case #3: true
Case #4: false
*/

#include <stdio.h>
int main()
{
	int n,cnt;
	scanf("%d",&n);
	long long a[n],b[n],c[n],d[n];
	//long long有8字节的大小
	for(cnt=0;cnt<n;cnt++){ 
		scanf("%lld %lld %lld",&a[cnt],&b[cnt],&c[cnt]);
		d[cnt]=a[cnt]+b[cnt]; 
		//printf("%d",d[n]);
	}
	for(cnt=0;cnt<n;cnt++){
		if(d[cnt]>c[cnt]){
			printf("Case #%d: true\n",cnt+1);
		}
		else{
			printf("Case #%d: false\n",cnt+1);
		}
	}
	return 0;
}
 
