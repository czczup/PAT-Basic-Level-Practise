#include <stdio.h>
void numcheck(int i);
int main(){
    char num[101],num1[3]; //分别存放输入的自然数和累加后的结果
    int a = 0,n = 0;
    for(int cnt=0;cnt<101;cnt++){
        num[cnt] = getchar() - '0'; //字符转换为数值
        a += num[cnt];              //累加
        if(num[cnt]=='\n'-'0'){     //读取到回车
            break;
        }
    }
    a += 38; //修正'\n'带来的误差
    for(n=0;a>0;n++){ //求和的结果存入num1
        num1[n] = a % 10;
        a /= 10;
    }
    for(;n>0;n--){ //输出拼音
        numcheck(num1[n-1]);
        if(n!=1){
            printf(" ");
        }
    }
    return 0;
}

void numcheck(int i){
    switch(i){
        case 0:printf("ling");break;
        case 1:printf("yi");break;
        case 2:printf("er");break;
        case 3:printf("san");break;
        case 4:printf("si");break;
        case 5:printf("wu");break;
        case 6:printf("liu");break;
        case 7:printf("qi");break;
        case 8:printf("ba");break;
        case 9:printf("jiu");break;
    }
}
 
