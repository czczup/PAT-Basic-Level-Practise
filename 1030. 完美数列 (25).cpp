#include <stdio.h>
int main()
{
    int N,p,i;
    scanf("%d %d",&N,&p);
    int chlist[N],maxlist[N];
    for(i=0;i<N;i++)
        scanf("%d",&chlist[i]);
    
    for(i=0;i<N;i++){
        int min=chlist[i];
        //每个chlist[i]轮流当最小值 
        int maxnum=min*p,cnt=0;
        for(int j=0;j<N;j++){
            if(chlist[j]<=maxnum && chlist[j]>=min)
                cnt++;
        }
        maxlist[i]=cnt;
        //记录下每次利用数字的数量 
    }//T(n)=O(n^2),会超时 
    
    int max=maxlist[0];
    for(i=0;i<N;i++){
        if(maxlist[i]>max)
            max=maxlist[i];
    }//从中选出最大值 
    printf("%d",max);
    
 } 
