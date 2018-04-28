#include <stdio.h>
#include <math.h>
int isprime(int n){
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0)
            return 0;
    return 1;
}
int main() {
    int N;
    scanf("%d",&N);//参赛人数
    int students[N],flag[N]= {0};
    for(int i=0; i<N; i++){
        scanf("%d",&students[i]);
    }
    int checkN;
    scanf("%d",&checkN);
    for(int i=0; i<checkN; i++){
        int ID,j;
        scanf("%d",&ID);
        for(j=0; j<N; j++){
            if(ID == students[j]){
                if(flag[j]==0) //未领过奖的
                    if(j==0) //冠军
                        printf("%04d: Mystery Award\n",ID);
                    else if(isprime(j+1)) //排名是素数
                        printf("%04d: Minion\n",ID);
                    else //其他
                        printf("%04d: Chocolate\n",ID);
                else //领过奖的
                    printf("%04d: Checked\n",ID);
                flag[j] = 1;
                break;
            }
        }
        if(j==N){ //查找失败
            printf("%04d: Are you kidding?\n",ID);
        }
    }
}