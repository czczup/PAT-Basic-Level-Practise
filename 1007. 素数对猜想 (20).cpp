#include <stdio.h>
#include <math.h>
int main(){
    int N;
    scanf("%d",&N);
    int prime[10000] = {0}; //100000个数中素数少于10000个
    int count = 0; //记录素数的个数
    for(int num=2;num<=N;num++){
        int i;
        for(i=2;i<=sqrt(num);i++){
            if(num % i==0){
                break;
            }
        }
        if(i > sqrt(num)) {
            prime[count] = num; //记录素数
            count++;
        }
    }
    int n = 0;
    for(int i=0;i<count;i++){
        if(prime[i+1] - prime[i]==2){ //如果差为2，则n+1
            n++;
        }
    }
    printf("%d",n);
    return 0;
}
