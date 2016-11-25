/*1006. 换个格式输出整数 (15)*/
/*
让我们用字母B来表示“百”、字母S表示“十”，
用“12...n”来表示个位数字n（<10），换个格式
来输出任一个不超过3位的正整数。例如234应该被
输出为BBSSS1234，因为它有2个“百”、3个“十”
、以及个位的4。

输入格式：每个测试输入包含1个测试用例，给出正
整数n（<1000）。

输出格式：每个测试用例的输出占一行，用规定的格
式输出n。

输入样例1：
234
输出样例1：
BBSSS1234
输入样例2：
23
输出样例2：
SS123
*/

#include <stdio.h>
int Fprint(int,int[]);//定义Fprint函数 
int main()
{
	int number,num[3];
	printf("请输入一个不超过3位的正整数\n");
	scanf("%d",&number);
	num[0]=number/100;//计算各位数
	num[1]=number/10%10;
	num[2]=number%10;
	//用数组避免定义过多字母变量
	for(int n=0;n<2;n++){
		if(num[n]>0){
			for(int cnt=0;cnt<num[n];cnt++){
			Fprint(n,num);
			}//调用函数输出字母
		}//判断该位是否存在
	}//最外围循环控制百位还是十位
	Fprint(2,num);//调用函数输出数字
    return 0;
}

int Fprint(int n,int num[])
{
 	switch(n){
 		case 0:printf("B");break;
 		case 1:printf("S");break;
 		case 2:for(int i=1;i<=num[2];i++){
 					printf("%d",i);
					//输出一串数字
		 		}break;
	}
}
