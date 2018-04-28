#include <stdio.h> 
int main(){
    int first,n,k;
    scanf("%d %d %d",&first,&n,&k);
    int data[100000];
    int next[100000];
    int list[100000];
    int final[100000];
    for(int i=0; i<n; i++){
        int address;
        scanf("%d", &address);
        scanf("%d %d",&data[address],&next[address]);
    }
    int cnt = 0;
    while(first!=-1){
        list[cnt] = first;
        cnt++;
        first = next[first];
    }
    for(int i=0;i<cnt;i++){
        final[i] = list[i];
    }
    for(int i=0;i<(cnt-cnt%k);i++){
        final[i] = list[(i/k)*k+k-i%k-1];
    }
    for(int i=0;i<cnt-1;i++){
        printf("%05d %d %05d\n",final[i],data[final[i]],final[i+1]);
    }
    printf("%05d %d %d\n",final[cnt-1],data[final[cnt-1]],-1);
    return 0;
}
