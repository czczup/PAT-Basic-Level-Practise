#include <stdio.h>
#include <string.h>
void pop(char* listnum,int pos){
    while(listnum[pos]!='\0'){
        listnum[pos] = listnum[pos+1];
        pos++;
    }
}

void append(char* listnum,char ch){
    int len = strlen(listnum);
    listnum[len] = ch;
    listnum[len+1] = '\0';
}

void insert(char* listnum,int pos,char ch){
    int len = strlen(listnum);
    int i = 0;
    for(i=len+1;i>pos;i--)
        listnum[i]=listnum[i-1];
    listnum[i] = ch;
}

int main(){
    char str[10010],listnum[20000]; 
    scanf("%s",str);
    int len = strlen(str);
    int i = 0,pos = 0;
    while(str[pos]!='E'){ //记录E所在的下标
        pos++;
    }
    
    int exp = 0;
    for(i = pos+2;i<len;i++){ //记录指数的大小
        exp = exp*10 + (str[i]-'0');
    } 
    if(str[pos+1] == '-'){
        exp = -exp;
    }
    
    for(i=0;i<pos;i++){ //从str中复制得到listnum
        listnum[i] = str[i];
    } 
    listnum[i] = '\0';

    int decimal = strlen(listnum) - 3;; //小数部分长度
    if(exp > 0){ //指数大于0
        if(exp >= decimal){ //指数大于小数长度
            pop(listnum,2); //去掉'.'号
            for(i=0;i<exp-decimal;i++){
                append(listnum,'0'); //末尾补'0'
            }
        }
        else{ //指数小于等于0
            pop(listnum,2); //去掉'.'号
            insert(listnum,2 + exp,'.'); //把'.'号插入在2+exp处
        }
    } else { //指数小于等于0
        pop(listnum,2); //去掉'.'号
        for(i=0;i<-exp;i++)
            insert(listnum,1,'0'); //'+'或'-'后补'0'
        insert(listnum,2,'.'); //原位置插入'.'号
    }
    if(listnum[0]=='+'){ //'+'号不输出
        pop(listnum,0);
    } 
    printf("%s",listnum);
}
