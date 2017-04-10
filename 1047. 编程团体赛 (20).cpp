/*1047. 编程团体赛 (20)*/
#include <stdio.h>
int main()
{
	int N;
	int group[10000]={0};
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		int groupnum,num;
		int score;
		scanf("%d-%d %d",&groupnum,&num,&score);
		group[groupnum] += score;
	}
	int max = -1;
	int mark = 0;
	for(int i=0;i<10000;i++){
		if(group[i]>max){
			max = group[i];
			mark = i;
		}
	}
	printf("%d %d",mark,group[mark]);
}
