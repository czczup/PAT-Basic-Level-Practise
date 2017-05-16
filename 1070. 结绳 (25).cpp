#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int N;
	scanf("%d",&N);
	int length[N];
	for(int i=0;i<N;i++){
		scanf("%d",&length[i]);
	}
	sort(length,length+N);
	double temp = 0,len;
	len = length[0]/2.0 + length[1]/2.0;
	for(int i=2;i<N;i++){
		len = len/2.0 + length[i]/2.0;
	}
	printf("%d",(int)len);
}

