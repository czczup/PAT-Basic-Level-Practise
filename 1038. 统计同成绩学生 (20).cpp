/*1038. 统计同成绩学生 (20)*/
#include <stdio.h>
int main()
{
	int num;//学生总人数
	scanf("%d",&num);
	int score[101]={0};//0-100分 
	for(int i=0;i<num;i++){
		int grade;
		scanf("%d",&grade);
		score[grade]++;
	}
	int check_num;//检查的分数数量 
	scanf("%d",&check_num);
	for(int i=0;i<check_num;i++){
		int check;
		scanf("%d",&check);
		printf("%d",score[check]);
		if(i!=check_num-1)
			printf(" ");
	}
	 
}
