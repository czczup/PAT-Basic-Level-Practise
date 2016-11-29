/*1014. 福尔摩斯的约会 (20)*/
/*
大侦探福尔摩斯接到一张奇怪的字条：“我们约会吧！
3485djDkxh4hhGE 2984akDfkkkkggEdsb s&hgsfdk
d&Hyscvnm”。大侦探很快就明白了，字条上奇怪的乱码
实际上就是约会的时间“星期四 14:04”，因为前面两
字符串中第1对相同的大写英文字母（大小写有区分）是
第4个字母'D'，代表星期四；第2对相同的字符是'E'，那
是第5个英文字母，代表一天里的第14个钟头（于是一天
的0点到23点由数字0到9、以及大写字母A到N表示）；后
面两字符串第1对相同的英文字母's'出现在第4个位置（
从0开始计数）上，代表第4分钟。现给定两对字符串，请
帮助福尔摩斯解码得到约会的时间。

输入格式：
输入在4行中分别给出4个非空、不包含空格、且长度不超
过60的字符串。

输出格式：
在一行中输出约会的时间，格式为“DAY HH:MM”，其中
“DAY”是某星期的3字符缩写，即MON表示星期一，TUE表
示星期二，WED表示星期三，THU表示星期四，FRI表示星
期五，SAT表示星期六，SUN表示星期日。题目输入保证每
个测试存在唯一解。

输入样例：
3485djDkxh4hhGE 
2984akDfkkkkggEdsb 
s&hgsfdk 
d&Hyscvnm

输出样例：
THU 14:04
*/

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

