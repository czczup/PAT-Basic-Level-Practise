#include <stdio.h>
int main()
{
	char words[40][20],str[40];
	int n,record;
	for(n=0;n<20;n++){
		scanf("%s",words[n]);
		str[n]=getchar();
		if(str[n]=='\n'){
			record=n;
			break;
		}
	}
	for(n=record;n>=0;n--){
		printf("%s",words[n]);
		if(n!=0){
			printf(" ");
		} 
	}
} 
