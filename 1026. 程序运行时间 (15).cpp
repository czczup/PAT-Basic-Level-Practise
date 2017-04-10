/*1026. 程序运行时间 (15)*/
#include <stdio.h>
int main() 
{
    int CLK1,CLK2,dCLK;
    scanf("%d %d",&CLK1,&CLK2);
    dCLK = (int)((CLK2-CLK1)/100.0+0.5);
    int hour,minute,second;
    hour = dCLK/3600;
    minute = dCLK%3600/60;
    second = dCLK%60;
    printf("%02d:%02d:%02d",hour,minute,second);
}
