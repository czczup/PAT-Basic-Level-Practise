#include <stdio.h>
int main()
{
	int n=0,cnt;
	scanf("%d",&n);
	for(cnt=0;n!=1;cnt++){
		if(n%2==0){
			n/=2; 
		}//如果n为偶数
		 //把n砍掉一半 
		else{
			n=3*n+1;
			n=n/2;
		}//如果n为奇数
		 //把3n+1砍掉一半 
	}
	printf("%d",cnt);	
	return 0;
 } 
