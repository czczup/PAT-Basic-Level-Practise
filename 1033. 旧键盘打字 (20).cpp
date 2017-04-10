#include <stdio.h>
#include <string.h>

int main()
{
	char bad[256],text[100010];//没有字符能打出 
	gets(bad);//坏掉的键,第二个测试点是特例,是一个第一行为空的例子
	gets(text);//读入字符串 
	int len = strlen(text);
	for(int i=0;i<strlen(bad);i++){
		for(int j=0;j<len;j++){
			if(bad[i]=='+' && (text[j]>='A' && text[j]<='Z'))
			//如果坏键是'+',文本是大写字母,则无输出
				text[j] = '\0';
			if(bad[i]>='A' && bad[i]<='Z')//控制条件要严格 
			//如果坏键是大写字母,文本是字母,则无输出
				if(bad[i]==text[j] || bad[i]==text[j]-32)
					text[j] = '\0';
			if(bad[i]==text[j])
			//如果两个字符相等,则无输出 
				text[j] = '\0';
		}	
	} 
	for(int i=0;i<len;i++)	
		if(text[i]!='\0')//跳过所有标记 
			printf("%c",text[i]);
	printf("\n");
}
