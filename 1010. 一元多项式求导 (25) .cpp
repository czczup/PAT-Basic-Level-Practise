#include <stdio.h>
int main(){
    int num[1000]={0},cnt=0;
    for(int n=0;n<1000;n++){
        scanf("%d",&num[n]);
        if(getchar()=='\n'){
            break;
        }
    }
    for(int n=0;n<999;n+=2){
        if(num[n]!=num[n+1] && num[n]*num[n+1]!=0){ //求导
            if(n!=0)
                printf(" ");
            printf("%d %d",num[n]*num[n+1],num[n+1]-1);
        }
        else if(num[1]==0){ //零多项式
            printf("0 0");
            break;
        }
    }
}
