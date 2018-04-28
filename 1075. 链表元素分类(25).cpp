#include <iostream>  
#include <vector>  
using namespace std;
struct node {  
    int data, next;  
}list[100000];  
vector<int> v[3];  

int main() {  
    int start,N,K;  
    scanf("%d%d%d",&start,&N,&K);
    for(int i=0;i<N;i++){  
        int address;
        scanf("%d",&address);  
        scanf("%d%d",&list[address].data,&list[address].next);
    } 
    while(start!=-1){  
        int data = list[start].data;  
        if(data < 0)  
            v[0].push_back(start);  
        else if(data >= 0 && data <= K)  
            v[1].push_back(start);  
        else  
            v[2].push_back(start);
        start = list[start].next;  
    }   
    int flag = 0;
    for(int i=0;i<3;i++){
        for(int j=0;j<v[i].size();j++){
            if(flag==0){
                printf("%05d %d ", v[i][j], list[v[i][j]].data);
                flag = 1;
            } else {
                printf("%05d\n%05d %d ", v[i][j], v[i][j], list[v[i][j]].data);
            }
        }
    }
    printf("-1");
    return 0;  
}  
