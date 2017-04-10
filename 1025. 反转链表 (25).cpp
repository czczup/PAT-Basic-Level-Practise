/*1025. 反转链表 (25)*/
/*算法复杂度太大，有待改进*/
#include <stdio.h> 
#include <string.h>
typedef struct{
    int address;
    int data;
    int next;
}List;

int main()
{
    int firstaddress,N,K,i;
    scanf("%d %d %d",&firstaddress,&N,&K);
    //首地址，总个数，反转个数 
    List list[N];
    //list[N]用于存放原始数据 
    for(i=0;i<N;i++)
        scanf("%d%d%d",&list[i].address,&list[i].data,&list[i].next);

    List newlist[N];
    //newlist[n]用于存放排序后的数据 
    int count=0,cnt=0;
    while(firstaddress!=-1){//排序 
        if(firstaddress==list[cnt].address){
            newlist[count] = list[cnt];
            firstaddress = list[cnt].next;
            count++;
            cnt = -1;
        }
        cnt++;
    }
    int valid = count;
    //记录有效数据的数量 
    
    count=0;
    List new2list[valid];
    //new2list用于记录改变指针后的数据 
    for(int j=0;j<valid/K;j++)
        for(i=0;i<K;i++){
            cnt = j*K+K-1-i;
            new2list[count] = newlist[cnt];
            count++;
        }//需要反转部分 
    for(i=valid/K*K;i<valid;i++){
        new2list[count] = newlist[i];
        count++;
    }//无需反转部分 
    for(i=0;i<valid-1;i++)//改变指针 
        new2list[i].next=new2list[i+1].address;
    new2list[i].next=-1;
    
    
    for(i=0;i<valid-1;i++)//输出数据 
        printf("%05d %d %05d\n",new2list[i].address,new2list[i].data,new2list[i].next);
    printf("%05d %d %d",new2list[i].address,new2list[i].data,new2list[i].next);
}
