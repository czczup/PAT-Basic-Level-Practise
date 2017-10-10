/*1024. 科学计数法 (20)*/
#include <stdio.h> 
#include <string.h>
void pop(char* listnum,int pos);
//删除list中下标为pos的元素 
void append(char* listnum,char ch);
//在list后追加ch 
void insert(char* listnum,int pos,char ch);
//在list的pos下标处插入ch 
int main()
{
    char str[10010],listnum[20000]; 
    scanf("%s",str);
    int len = strlen(str);
    int i = 0;

    int pos = 0;
    while(str[pos]!='E'){
        pos++;
    }//记录E所在的下标 
    
    int exp = 0;
    for(i = pos+2;i<len;i++){
        exp = exp*10 + (str[i]-'0');
    } 
    if(str[pos+1] == '-')
        exp = -exp;
    //记录指数的大小 
    
    for(i=0;i<pos;i++){
        listnum[i] = str[i];
    } 
    listnum[i] = '\0';
    //从str中复制得到listnum
     
    //数字部分分有小数点和无小数点
    //指数部分分大于和小于0
    int decimal = 0;
    //小数部分长度 
    if(listnum[2]=='.'){
        decimal = strlen(listnum) - 3;
        if(exp > 0)
            if(exp >= decimal){ 
                pop(listnum,2);
                for(i=0;i<exp-decimal;i++){
                    append(listnum,'0');
                }
            } 
            else{
                pop(listnum,2);
                insert(listnum,2 + exp,'.');
            }
        else{
            pop(listnum,2);
            for(i=0;i<-exp;i++)
                insert(listnum,1,'0');
            insert(listnum,2,'.');
        }
    }  
    else{
        if(exp >= 0)
            for(i=0;i<exp;i++)
                append(listnum,'0');
        else{
            for(i=0;i<-exp;i++)
                insert(listnum,1,'0');
            insert(listnum,2,'.');
        }
    }
    if(listnum[0]=='+'){
        pop(listnum,0);
    } 
    printf("%s",listnum);
}


void pop(char* listnum,int pos)
{
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
