#include <cstdio>
#include <math.h>
#include <algorithm>
using namespace std;
bool cmp(int a,int b) {
	return a>b;
}
int num[10000][10000];
void assign(int temp[],int num[10000][10000],int x,int y,int m,int n,int N,int cnt){
    for(int i=x;i<n;i++){ //填充上行
        num[y][i] = temp[cnt++];
        if(cnt==N) return;
    }
    if(m != 1) //不止一行
        for(int i=y+1;i<m;i++){ //填充右列
            num[i][n-1] = temp[cnt++];
            if(cnt==N) return;
        }
    if(n!=1 && m != 1){ // 不止一行一列
        for(int i=n-2;i>x-1;i--){ //填充下行
            num[m-1][i] = temp[cnt++];
            if(cnt==N) return;
        }
        for(int i=m-2;i>y;i--){ //填充左列
            num[i][x] = temp[cnt++];
            if(cnt==N) return;
        }
    }
    if(cnt!=N)
        assign(temp,num,x+1,y+1,m-1,n-1,N,cnt);
}

int main(){
    int N;
    scanf("%d",&N);
    int minimum = N,n = 0,m = 0;
    for(int i=1;i<=sqrt(N);i++){ //求行数列数, m行n列
        if(N%i==0 && minimum>N/i-i){
            minimum = N/i-i;
            n = i;
            m = N/i;
        }
    }
    int temp[N];
    for(int i=0;i<N;i++){
        scanf("%d",&temp[i]);
    }
    sort(temp,temp+N,cmp); //从大到小排序
    assign(temp,num,0,0,m,n,N,0); //填充螺旋矩阵
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(j != n-1){
                printf("%d ",num[i][j]);
            } else{
                printf("%d\n",num[i][j]);
            }
        }
    }
}