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
