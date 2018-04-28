#include <stdio.h>
#include <string.h>
int main(){
	int N,count=0,max=0,min=734991;
	scanf("%d",&N);
	char name[6],maxname[6],minname[6];
	for(int i=0;i<N;i++){
	    int year,month,day;
		scanf("%s %d/%d/%d",name,&year,&month,&day);
		int sum = (year-1)*365 + (month-1)*30 + day;
		if(sum>=661991 && sum<=734991){ //通过数据预处理转化为比大小问题
			if(sum > max){ //找最年幼
				max = sum;
				strcpy(minname,name);
			}
			if(sum < min){ //找最年长
				min = sum;
				strcpy(maxname,name);
			}
			count++; //合法输入计数
		}
	}
	if(count == 0) //注意可能存在都不合法的情况，这时应输出0
		printf("0");
	else
		printf("%d %s %s",count,maxname,minname);
}
