//使用空间换时间 
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{	//输入夫妻 
	int N;
	scanf("%d",&N);
	int couple[100000];//50000对夫妻
	for(int i=0;i<N;i++){
		int man,woman; 
		scanf("%d %d",&man,&woman);
		couple[man] = woman;
		couple[woman] = man;
	}
	//输入参加者 
	int M;
	scanf("%d",&M);
	int person[100000]={0};//不存在 
	for(int i=0;i<M;i++){
		int a_person;
		scanf("%d",&a_person);
		person[a_person] = 1;//存在 
	}
	
	//数据处理 
	int cnt = 0;
	for(int i=0;i<100000;i++){
		if(person[i]==1 && person[couple[i]]==1){
			person[i] = 0;//将情侣标记为不存在 
			person[couple[i]] = 0;
			cnt += 2;//记录情侣人数 
		}
	}
	printf("%d\n",M-cnt);
	
	//输出部分 
	int printtime = 0;//控制空格的输出 
	for(int i=0;i<100000;i++){
		if(person[i]){
			if(printtime==0){
				printf("%05d",i);
				printtime = 1;
			}else
				printf(" %05d",i);
		}
	} 		 
}

