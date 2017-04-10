/*1041. 考试座位号 (15)*/
#include <stdio.h>
typedef struct student{
	char id[15];
	int num1;
	int num2;
}Student; 
int main()
{
	int N;
	scanf("%d",&N);
	Student number[N];
	for(int i=0;i<N;i++){
		scanf("%s",number[i].id);
		scanf("%d %d",&number[i].num1,&number[i].num2);
	}
	int n;
	scanf("%d",&n);
	while(n--){
		int check;
		scanf("%d",&check);
		for(int i=0;i<N;i++)
			if(check==number[i].num1){
				printf("%s %d\n",number[i].id,number[i].num2);
				break;
			}
	}
}
