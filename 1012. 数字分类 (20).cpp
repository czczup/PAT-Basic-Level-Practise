#include <stdio.h>
int main(int argc,char* argv[]) 
{
	int N,A[5]={0},i=1,cnt1,cnt2=0,cnt3=0,num;
	scanf("%d",&N);
	//cnt1 控制循环
	//cnt2 A2计数
	//cnt3 A4计数 
	for(cnt1=0;cnt1<N;cnt1++){
		scanf("%d",&num);
		if(num%2==0 && num%5==0)
			A[0]+=num;
		if(num%5==1){
			A[1]+=i*num;
			i=-i;
			cnt2++;
		}
		if(num%5==2){
			A[2]++;
		} 
		if(num%5==3){
			A[3]+=num;
			cnt3++;
		}
		if(num%5==4){
			A[4]=A[4]>num?A[4]:num;
		}
	}
	for(cnt1=0;cnt1<5;cnt1++){
	//A2可以等于0，其他都不能等于0 
		if(A[cnt1]!=0)
			if(cnt1!=3)
				printf("%d",A[cnt1]);
			else
				printf("%.1f",A[cnt1]/(float)cnt3);
		else{
			if(cnt1==1 && cnt2!=0){
			//A2且记进数的量大于0 
				printf("%d",A[cnt1]);
			}
			else printf("N");
		}
		if(cnt1!=4)
			printf(" ");
		else
			printf("\n");	
	}
	return 0;
}
 
