/*1039. 到底买不买 (20)*/
#include <stdio.h>
#include <string.h>
int main() {
	char pearl[1000],buy[1000];
	int mark[1000] = {0},cnt=0;
	scanf("%s",pearl);//店家串好的
	scanf("%s",buy);//想买的
	int lenbuy = strlen(buy),lenpearl = strlen(pearl);
	for(int i=0; i<lenbuy; i++)
		for(int j=0; j<lenpearl; j++)
			if(buy[i]==pearl[j] && mark[j]==0){
				mark[j] = 1;//数到过
				cnt++;//记录有用的
				break;
			}
	if(cnt==lenbuy)//想买的珠子都买到
		printf("Yes %d",lenpearl - lenbuy);
	else//有珠子没买到
		printf("No %d",lenbuy - cnt);
}
