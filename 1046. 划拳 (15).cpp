/*1046. 划拳 (15)*/
#include <stdio.h>
int main()
{
	int fst1,fst2,sec1,sec2;
	int N,drink1=0,drink2=0;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%d %d %d %d",&fst1,&fst2,&sec1,&sec2);
		int sum = fst1 + sec1;
		if(fst2==sum && sec2!=sum)
			drink2++;
		if(sec2==sum && fst2!=sum)
			drink1++;
	}
	printf("%d %d",drink1,drink2);
}
