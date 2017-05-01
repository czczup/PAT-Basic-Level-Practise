#include <stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	int number[N];
	for(int i=0;i<N;i++){
		scanf("%d",&number[i]);
	}
	int sum = 0;
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			if(i!=j){
				int temp = number[i]*10 + number[j];
				sum += temp;
			}
		}
	}
	printf("%d",sum);
}

