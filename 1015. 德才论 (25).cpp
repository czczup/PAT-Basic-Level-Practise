#include <iostream>
#include <algorithm>
using namespace std;
typedef struct examination{
	int examnum;//准考证号 
	int moral,talent,sum;//德、才、总分 
}exam;
int cmp(exam a,exam b){
	if(a.sum == b.sum)//先按总分排,降序 
		if(a.moral == b.moral)//再按德分排,降序 
			return a.examnum < b.examnum;//再按学号排,升序 
		else
			return a.moral > b.moral;
	else
		return a.sum > b.sum;
}
exam swap(exam &stu1,exam &stu2){//交换两个成绩的位置 
	exam temp;
	temp = stu1;
	stu1 = stu2;
	stu2 = temp;
}
int main()
{
	int amount,lowest,priority;
	scanf("%d %d %d",&amount,&lowest,&priority);
	exam stu[amount];
	for(int i=0;i<amount;i++){
		scanf("%d %d %d",&stu[i].examnum,&stu[i].moral,&stu[i].talent);
		stu[i].sum = stu[i].moral + stu[i].talent; 
	}
	int count = 0,temp;
	for(int i=0;i<amount;i++){//找到德才全尽交换到头部 
		if(stu[i].moral>=priority && stu[i].talent>=priority)
			swap(stu[i],stu[count++]);
	}
	sort(stu,stu + count,cmp);
	temp = count;
	for(int i=count;i<amount;i++){//找到德胜才交换到德才全尽后 
		if(stu[i].moral>=priority && stu[i].talent<priority && stu[i].talent>=lowest)
			swap(stu[i],stu[count++]);
	}
	sort(stu+temp,stu+count,cmp);
	temp = count;
	for(int i=count;i<amount;i++){//找到才德兼亡但尚有德胜才交换到德胜才后 
		if(stu[i].moral<priority && stu[i].talent<priority && stu[i].moral>=stu[i].talent && stu[i].moral>=lowest && stu[i].talent>=lowest)
			swap(stu[i],stu[count++]);
	}
	sort(stu+temp,stu+count,cmp);
	temp = count;
	for(int i=count;i<amount;i++){//找到才德兼亡但尚有德胜才交换到德胜才后 
		if(stu[i].moral>=lowest && stu[i].talent>=lowest)
			swap(stu[i],stu[count++]);
	}
	sort(stu+temp,stu+count,cmp);
	printf("%d\n",count);
	for(int i=0;i<count;i++)
		printf("%d %d %d\n",stu[i].examnum,stu[i].moral,stu[i].talent);
}
/*
1.高于优先录取线----才德全尽
2.才分不到但德分到线----德胜才
3.德才分均低于H，但是德分不低于才分----才德兼亡但尚有德胜才
4.其他达到最低线L
*/
