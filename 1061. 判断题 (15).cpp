#include <stdio.h>
int main()
{
	int N,M;
	scanf("%d %d",&N,&M); //学生人数和判断题数量 
	int Full[M],TrueAns[M];
	for(int i=0;i<M;i++) //读入每道题的满分值 
		scanf("%d",&Full[i]);
	for(int i=0;i<M;i++) //读入每道题的正确答案 
		scanf("%d",&TrueAns[i]);
	for(int i=0;i<N;i++){
		int answer[M],sum=0;
		for(int j=0;j<M;j++){
			scanf("%d",&answer[j]);
			if(answer[j]==TrueAns[j])//判断答案是否正确 
				sum += Full[j];//记录总分 
		}
		printf("%d\n",sum);
	}
	
}

