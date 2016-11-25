/*1004. 成绩排名 (20)*/
/*
读入n名学生的姓名、学号、成绩，分别输出成绩最
高和成绩最低学生的姓名和学号。输入格式：每个
测试输入包含1个测试用例，格式为

  第1行：正整数n
  第2行：第1个学生的姓名 学号 成绩
  第3行：第2个学生的姓名 学号 成绩
  ... ... ...
  第n+1行：第n个学生的姓名 学号 成绩

其中姓名和学号均为不超过10个字符的字符串，成绩
为0到100之间的一个整数，这里保证在一组测试用例
中没有两个学生的成绩是相同的。

输出格式：对每个测试用例输出2行，第1行是成绩最
高学生的姓名和学号，第2行是成绩最低学生的姓名
和学号，字符串间有1空格。

输入样例：
3
Joe Math990112 89
Mike CS991301 100
Mary EE990830 95

输出样例：
Mike CS991301
Joe Math990112
*/

#include <stdio.h> 
struct student{
		char name[11];
		char studynum[11];
		int score; 
};

int max(int a,int b);
int min(int a,int b);
int chkmax(int maxnum,struct student top[],int *p);
int chkmin(int minnum,struct student top[],int *p);

//student结构用于存放3种数据 

int main()
{
	
	int nofstu;//num of student
	printf("请输入学生的数量：\n");
	scanf("%d",&nofstu);
	struct student top[nofstu];
	//用nofstu的数量定义结构数组 
	for(int i=0;i<nofstu;i++){
		scanf("%s %s %d",&top[i].name,\
		&top[i].studynum,&top[i].score);
	}//用循环读入结构的3种成员 
	int maxnum=0,minnum=100;
	//最高分高于0，最低分低于100 
	for(int n=0;n<nofstu;n++){
		maxnum=max(maxnum,top[n].score);
		minnum=min(minnum,top[n].score);
	}//调用max/min函数得到成绩的最值 

	printf("%s %s\n",top[chkmax(maxnum,top,&nofstu)].name,\
		top[chkmax(maxnum,top,&nofstu)].studynum);
    //调用函数chkmax并输出整个结构 
	printf("%s %s\n",top[chkmin(minnum,top,&nofstu)].name,\
		top[chkmin(minnum,top,&nofstu)].studynum);
	//调用函数chkmin并输出整个结构 
	return 0;
} 

int chkmax(int maxnum,struct student top[],int *p)
{
	for(int i=0;i<*p;i++){
		if(maxnum==top[i].score)
		return i;
	}
}//检查取最大值时top[i]中i的值 
int chkmin(int minnum,struct student top[],int *p)
{
	for(int i=0;i<*p;i++){
		if(minnum==top[i].score)
		return i;
	}
}//检查取最小值时top[i]中i的值 
int max(int a,int b)
{
	int maxnum;
	a>=b?(maxnum=a):(maxnum=b);
	return maxnum; 
}//取最大值 
int min(int a,int b)
{
	int minnum;
	a<b?(minnum=a):(minnum=b);
	return minnum; 
}//取最小值 
