/*1028. 人口普查 (20)*/
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char name[6],maxname[6],minname[6];
	int year,month,day,sum;
	int N,count=0,max=0,min=734991;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%s %d/%d/%d",name,&year,&month,&day);
		sum = (year-1)*365 + (month-1)*30 + day;
		if(sum>=661991 && sum<=734991){
		//通过数据预处理转化为比大小问题 
			if(sum > max){//找最年幼 
				max = sum;
				strcpy(minname,name);
			}
			if(sum < min){//找最年长 
				min = sum;
				strcpy(maxname,name);
			}
			count++;//有效个数计数 
		}
	}
	if(count == 0)
		printf("0");
	else
		printf("%d %s %s",count,maxname,minname);
}/*注意可能存在都不合法的情况，这时应输出0*/
