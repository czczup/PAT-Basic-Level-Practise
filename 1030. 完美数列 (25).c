int main()
{
    int N,p,i;
    scanf("%d %d",&N,&p);
    int chlist[N],maxlist[N];
    for(i=0;i<N;i++)
        scanf("%d",&chlist[i]);
    
    for(i=0;i<N;i++){
        int min=chlist[i];
        int maxnum=min*p,cnt=0;
        for(int j=0;j<N;j++){
            if(chlist[j]<=maxnum && chlist[j]>=min)
                cnt++;
        }
        maxlist[i]=cnt;
    
    int max=maxlist[0];
    for(i=0;i<N;i++){
        if(maxlist[i]>max)
            max=maxlist[i];
    printf("%d",max);
    
 } 
