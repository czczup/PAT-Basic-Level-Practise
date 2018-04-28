#include <stdio.h>
#include <string.h>
int main(){
    int N,M; //学生人数、多选题的个数
    scanf("%d %d",&N,&M);
    /*读入题目数据*/
    int full_score[M],amount[M],true_amount[M]; //满分值、选项个数、正确选项个数
    char true_answer[M][20],answer[M][20]; //正确答案、学生给出的答案，因为读入了空格，需要额外的存储空间
    for(int i=0;i<M;i++){
        scanf("%d %d %d ",&full_score[i],&amount[i],&true_amount[i]);
        gets(true_answer[i]);
    }
    /*读入学生数据并判断对错*/
    int get_score[N]={0},false_amount[M]={0};
    for(int i=0;i<N;i++){ //第i个人
        for(int j=0;j<M;j++){ //第j个题目
            int temp,k;
            scanf("(%d ",&temp); //选中的选项个数
            for(k=0;k<2*temp-1;k++)
                scanf("%c",&answer[j][k]);
            answer[j][k] = '\0';
            scanf(")");
            getchar();
            if(strcmp(answer[j],true_answer[j])==0) //两个答案相等
                get_score[i] += full_score[j];
            else
                false_amount[j]++;
        }
    }
    for(int i=0;i<N;i++)
        printf("%d\n",get_score[i]);
    /*找最大的错误次数*/
    int max=-1;
    for(int i=0;i<M;i++)
        if(max<false_amount[i])
            max = false_amount[i];
    /*输出错误次数和编号*/
    if(max!=0)
        printf("%d",max);
    for(int i=0;i<M;i++){
        if(max==0){
            printf("Too simple");
            break;
        }
        if(false_amount[i]==max)
            printf(" %d",i+1);
    }
}