#include <stdio.h>
int main(){
    int number,num[3];
    scanf("%d",&number);
    num[0] = number / 100;      //百位
    num[1] = number / 10 % 10;  //个位
    num[2] = number % 10;       //十位
    for(int i=0;i<num[0];i++){
        printf("B");
    }
    for(int i=0;i<num[1];i++){
        printf("S");
    }
    for(int i=0;i<num[2];i++){
        printf("%d",i+1);
    }
    return 0;
}


