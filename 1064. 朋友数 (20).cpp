#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int FriNum[N],FriSum[37] = {0}; //下标表示朋友证号
    for(int i=0;i<N;i++){
        scanf("%d",&FriNum[i]);
    }
    for(int i=0;i<N;i++){ //对每一个数字计数
        int sum = 0;
        while(FriNum[i]!=0){
            sum += FriNum[i] % 10;
            FriNum[i] = FriNum[i] / 10;
        }
        FriSum[sum] += 1;
    }
    int result[37] = {0},j=0;
    for(int i=0;i<37;i++)//查找非零项
        if(FriSum[i] != 0)
            result[j++] = i;
    printf("%d\n",j);
    printf("%d",result[0]);
    for(int i=1;i<j;i++)
        printf(" %d",result[i]);
}