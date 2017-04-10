/*1042. 字符统计 (20)*/
#include <stdio.h>
#include <string.h>
int main()
{
	char ch[1010];
	gets(ch);
	int letter[26] = {0};
	int len = strlen(ch);
	for(int i=0;i<len;i++){
		if(ch[i]>='A' && ch[i]<='Z')
			letter[ch[i]-'A']++;
		if(ch[i]>='a' && ch[i]<='z')
			letter[ch[i]-'a']++;
	}//对应数组元素计数 
	int max = letter[0];
	int mark = 0;
	for(int i=0;i<26;i++)
		if(letter[i]>max){
			max = letter[i];
			mark = i;
		}//找最大 
	printf("%c %d",mark+'a',letter[mark]);
}

