#include <stdio.h>
int main(){
    int M,N,A,B,replace;
    scanf("%d %d %d %d %d",&M,&N,&A,&B,&replace);
    int pixel[M][N];
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            scanf("%d",&pixel[i][j]);
            if(pixel[i][j]>=A && pixel[i][j]<=B)
                pixel[i][j]=replace;
        }
    }
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            printf("%03d",pixel[i][j]);
            if(j!=N-1)
                printf(" ");
            else
                printf("\n");
        }
    }
}