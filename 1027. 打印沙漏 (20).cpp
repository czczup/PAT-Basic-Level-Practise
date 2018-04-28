#include <stdio.h>
#include <math.h>

void draw(int cnt,int layer,char ch){ //绘制符号
    for(int i=1;i<layer-cnt;i++){
        printf(" ",ch);
    }
    for(int i=0;i<2*cnt+1;i++){
        printf("%c",ch);
    }
    printf("\n");
}

int main(){
    int N,layer;
    char ch;
    scanf("%d %c",&N,&ch);
    layer = (int)sqrt((N+1)/2);
    for(int cnt=layer-1;cnt>0;cnt--){ //画上半个漏斗
        draw(cnt,layer,ch);
    }
    for(int cnt=0;cnt<layer;cnt++){ //画下半个漏斗
        draw(cnt,layer,ch);
    }
    printf("%d",N-(2*layer*layer-1));
}
