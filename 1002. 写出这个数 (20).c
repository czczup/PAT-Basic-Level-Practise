/*1002. 写出这个数 (20)*/
/*
读入一个自然数n，计算其各位数字之和，用汉语拼音
写出和的每一位数字。输入格式：每个测试输入包含
1个测试用例，即给出自然数n的值。这里保证n小于10
100。

输出格式：在一行内输出n的各位数字之和的每一位，
拼音数字间有1 空格，但一行中最后一个拼音数字后
没有空格。

输入样例：
1234567890987654321123456789

输出样例：
yi san wu
*/

#include <stdio.h>
int numcheck(int i);
int main()
{
	unsigned long long a,b=0;
	int cnt,n=0;
	scanf("%lld",&a);
	for(cnt=0;a>0;cnt++){
		b+=a%10;
		a/=10;
		printf("%lld\n",b);
	}
	//用b记录下各位数之和 
	unsigned long long c=b,d=b;
	//定义临时变量c、d 
	for(cnt=0;c>0;cnt++){
		c/=10;	
	}
	//数出b是几位数 
	int num[3];
    //b最大是909,3位数
	for(cnt=0;d>0;cnt++){
		num[cnt]=d%10;
		d/=10;	
	}
	//用d将各位记入数组 
	for(;cnt>0;cnt--){	
		numcheck(num[cnt-1]);
		//调用numcheck函数，输出拼音 
		if(cnt>1){
			printf(" ");
		//最后一个拼音后不输出空格 
		}
    } 
}

int numcheck(int i)
{
	switch(i) 
	{
		case 0:printf("ling");break; 
		case 1:printf("yi");break; 
		case 2:printf("er");break; 
		case 3:printf("san");break; 
		case 4:printf("si");break; 
		case 5:printf("wu");break; 
		case 6:printf("liu");break; 
		case 7:printf("qi");break; 
		case 8:printf("ba");break; 
		case 9:printf("jiu");break; 
	}

}
