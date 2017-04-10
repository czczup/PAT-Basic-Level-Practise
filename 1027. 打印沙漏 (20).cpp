/*1027. 打印沙漏 (20)*/
#include <stdio.h>
#include <math.h>
int num_in(int layer);
void printch(int layer,char ch);
void reprintch(int layer,char ch);
void draw(int cnt,int layer,char ch);
int main()
{
    int N,layer;
    char ch;
    scanf("%d %c",&N,&ch);
    layer = (int)sqrt((N+1)/2);
    reprintch(layer,ch);
    printch(layer,ch);
    printf("%d",N-(2*layer*layer-1));
} 

void reprintch(int layer,char ch){
    for(int cnt=layer-1;cnt>0;cnt--)
        draw(cnt,layer,ch);
}/*画上半个漏斗，不包括中间*/
void printch(int layer,char ch){
    for(int cnt=0;cnt<layer;cnt++)
        draw(cnt,layer,ch);
}/*画下半个漏斗*/
int num_in(int layer){
    return 2*layer+1;
}/*返回层内符号数量*/
void draw(int cnt,int layer,char ch){
    for(int i=1;i<(num_in(layer)-num_in(cnt))/2;i++)
        printf(" ",ch);
    for(int i=0;i<num_in(cnt);i++)
        printf("%c",ch);
    printf("\n");
}/*绘制符号*/
