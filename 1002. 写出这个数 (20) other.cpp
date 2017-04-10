#include <stdio.h>
void numcheck(int i);
int main(void)
{
	char num[101],num1[3];
	int a=0,n=0;
	for(int cnt=0;cnt<101;cnt++){
		num[cnt]=getchar()-'0';
		a+=num[cnt];
		if(num[cnt]=='\n'-'0'){
			break;
		}
	}
	
	a+=38;
	for(n=0;a>0;n++)	{
		num1[n]=a%10;
		a/=10;
	}
	for(;n>0;n--){
		numcheck(num1[n-1]);
		if(n!=1){
			printf(" ");
			}
	}
	return 0;
}
void numcheck(int i)
{
	switch(i) 
	{
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
 
