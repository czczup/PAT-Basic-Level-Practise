#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int A[5] = {0};              //存放符合要求的数字
    int i = 1,cnt_A2 = 0,cnt_A4 = 0;
    for(int cnt=0;cnt<N;cnt++){
        int num;
        scanf("%d",&num);
        if(num%2==0 && num%5==0) //被5整除的偶数
            A[0] += num;
        if(num%5==1){            //被5除后余1的数字
            A[1] += i * num;
            i = -i;
            cnt_A2++;
        }
        if(num%5==2)             //被5除后余2的数字
            A[2]++;
        if(num%5==3){            //被5除后余3的数字
            A[3] += num;
            cnt_A4++;
        }
        if(num%5==4)             //被5除后余4的数字
            A[4] = A[4] > num ? A[4] : num;
    }
    for(int cnt=0;cnt<5;cnt++){
        if(A[cnt]!=0){
            if(cnt!=3)
                printf("%d",A[cnt]);
            else
                printf("%.1f",A[cnt] / (float)cnt_A4);
        }
        else{
            if(cnt==1 && cnt_A2!=0)
                printf("%d",A[cnt]);
            else
                printf("N");
        }
        if(cnt!=4)
            printf(" ");
        else
            printf("\n");
    }
    return 0;
}