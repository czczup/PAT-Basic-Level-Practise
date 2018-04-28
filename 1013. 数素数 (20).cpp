#include <stdio.h>
#include <math.h>
int main(){
    int M,N,prime[10000];//最多计算10000个素数
    scanf("%d %d",&M,&N);
    int i,n=0;
    for(int cnt=2;true;cnt++){
        for(i=2;i<=sqrt(cnt);i++){
            if(cnt%i==0){
                break;
            }
        }
        if(i>sqrt(cnt)){ //数素数并写入数组
            prime[n++]=cnt;
            if(n>=N) //数到第N个素数就停止
                break;
        }
    }
    for(int cnt=M-1;cnt<N;cnt++){
        printf("%d",prime[cnt]);
        if((cnt-M+2)%10!=0 && cnt!=N-1)
            printf(" ");
        else
            if(cnt!=N-1)
                printf("\n");
    }
    return 0;
}
