/*1043. 输出PATest (20)*/
#include <stdio.h>
#include <string.h>
int main()
{
	char string[10000];
	char copy[10000]={0};
	scanf("%s",string);
	int point[6]={0,1,2,3,4,5};//6个指针分别指向6种字母 
	int len = strlen(string);
	for(int i=0;i<len;i++){
		if(string[i]=='P'){
			copy[point[0]] = 'P';
			point[0] = point[0] + 6;
		}
		if(string[i]=='A'){
			copy[point[1]] = 'A';
			point[1] = point[1] + 6;
		}
		if(string[i]=='T'){
			copy[point[2]] = 'T';
			point[2] = point[2] + 6;
		}
		if(string[i]=='e'){
			copy[point[3]] = 'e';
			point[3] = point[3] + 6;
		}
		if(string[i]=='s'){
			copy[point[4]] = 's';
			point[4] = point[4] + 6;
		}
		if(string[i]=='t'){
			copy[point[5]] = 't';
			point[5] = point[5] + 6;
		}
	}//在一个新的数组内重新按顺序存储 
	for(int i=0;i<10000;i++){
	//拷贝字符串离散,可能用到更多空间 
		if(copy[i]!='\0')
			printf("%c",copy[i]);
	}
}

