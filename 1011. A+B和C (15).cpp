#include <stdio.h>
int main()
{
	int n,cnt;
	scanf("%d",&n);
	long long a[n],b[n],c[n],d[n];
	//long long有8字节的大小
	for(cnt=0;cnt<n;cnt++){ 
		scanf("%lld %lld %lld",&a[cnt],&b[cnt],&c[cnt]);
		d[cnt]=a[cnt]+b[cnt]; 
		//printf("%d",d[n]);
	}
	for(cnt=0;cnt<n;cnt++){
		if(d[cnt]>c[cnt]){
			printf("Case #%d: true\n",cnt+1);
		}
		else{
			printf("Case #%d: false\n",cnt+1);
		}
	}
	return 0;
}
 
