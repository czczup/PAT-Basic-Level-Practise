#include <stdio.h>
int main(){
    int n = 0;
    scanf("%d",&n);
    for(int cnt=0;n!=1;cnt++){
        if(n%2==0){ //如果n为偶数，把n砍掉一半
            n /= 2;
        }
        else{       //如果n为奇数，把3n+1砍掉一半
            n = 3*n+1;
            n = n/2;
        }
    }
    printf("%d",cnt);
    return 0;
}
