#include <stdio.h>
char m[15] = {'1','0','X','9','8','7','6','5','4','3','2'};
int weight[20] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};

bool check(char id[])
{
	for(int i=0;i<17;i++)
		if(!(id[i]>='0'&&id[i]<='9'))//存在非数字 
			return false;
	int sum = 0;
	for(int i=0;i<17;i++)
		sum += (id[i]-'0')*weight[i]; 
	if(id[17]!=m[sum % 11])//校验码不等于最后一位 
		return false; 
}

int main()
{
	int N;
	bool flag = true,alltrue = true;
	char id[20];
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%s",id);
		flag = check(id);//检查是否正确 
		if(flag==false){
			alltrue = false;//有一项不正确则不全正确 
			printf("%s\n",id);//不正确就输出 
		}	
	} 
	if(alltrue==true)//全部正确 
		printf("All passed");
	return 0;
}
