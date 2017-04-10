#include <stdio.h>
int main()
{
	char str[4][61];
	int cnt;
	char week[7][5]={"MON","TUE","WED","THU","FRI","SAT","SUN"}; 
	scanf("%s %s %s %s",&str[0],&str[1],&str[2],&str[3]);
	for(cnt=0;cnt<61;cnt++){
		if(str[0][cnt]==str[1][cnt]){
			if(str[0][cnt]>='A' && str[0][cnt]<='G'){
					printf("%s ",week[str[0][cnt]-'A']);
					break;
			} 
		}
	}
	for(cnt++;cnt<61;cnt++){
		if(str[0][cnt]==str[1][cnt]){
			if(str[0][cnt]>='A' && str[0][cnt]<='N'){
				printf("%02d:",str[0][cnt]-'A'+10);
				break;
			}
			else if(str[0][cnt]>='0' && str[0][cnt]<='9'){
				printf("%02d:",str[0][cnt]-'0');
				break;
			}
		}
	}
	for(cnt=0;cnt<61;cnt++){
		if(str[2][cnt]==str[3][cnt]){
			if((str[2][cnt]>='A'&&str[2][cnt]<='Z')||
			(str[2][cnt]>='a'&& str[2][cnt]<='z')){
				printf("%02d",cnt);
				break;
			}
		}
	}
	return 0;
} 
