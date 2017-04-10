/*1036. 跟奥巴马一起编程 (15)*/
#include <stdio.h>
int main()
{
	int N;
	char ch;
	scanf("%d %c",&N,&ch);
	for(int i=0;i<N;i++)
		printf("%c",ch);
	printf("\n");
	for(int i=0;i<(int)(N/2.0+0.5)-2;i++){
		printf("%c",ch);
		for(int j=0;j<N-2;j++)
			printf(" ");
		printf("%c\n",ch);
	}
	for(int i=0;i<N;i++)
		printf("%c",ch);
	printf("\n");	
}

