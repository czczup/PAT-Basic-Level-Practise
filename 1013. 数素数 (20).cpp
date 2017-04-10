#include <stdio.h>
#include <math.h>
int main()
{
	int M,N,prime[10000];
	//最多计算10000个素数 
	int i,cnt,n=0;
	scanf("%d %d",&M,&N);
	for(cnt=2; ;cnt++){
		for(i=2;i<=sqrt(cnt);i++){
			if(cnt%i==0){
				break;
			} 
		}//数素数并写入数组 
		if(i>sqrt(cnt)){
			prime[n++]=cnt;
			if(n>=N)
				break;
		//数到第N个素数就停止 
		}
	}
	for(cnt=M-1;cnt<N;cnt++){
		printf("%d",prime[cnt]);
		if((cnt-M+2)%10!=0 && cnt!=N-1)
		//所有数最后和每一行最后不输出空格 
			printf(" ");
		else
			if(cnt!=N-1)
		//刚好整行时不回车 
			printf("\n");
	}
	return 0;
}
