#include <cstdio>
#include <iostream> 
#include <algorithm>
using namespace std;
int cmp(int a,int b){
	return a > b;
}
int main(){
    int num;
    scanf("%d",&num);
    int result = -1;
    while(result!=6174){
        int mylist[4] = {num/1000,num%1000/100,num%100/10,num%10};//将数字各位记入list
        sort(mylist,mylist+4);
        int num1 = mylist[0]*1000 + mylist[1]*100 + mylist[2]*10 + mylist[3];
        sort(mylist,mylist+4,cmp);
        int num2 = mylist[0]*1000 + mylist[1]*100 + mylist[2]*10 + mylist[3];
        result = max(num1,num2) - min(num1,num2);//计算数字差
        num = result;
        printf("%04d - %04d = %04d\n",max(num1,num2),min(num1,num2),result);
        if(result == 0)
            break;
    }
}

