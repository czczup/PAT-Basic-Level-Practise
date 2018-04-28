#include <stdio.h>
#include <string.h>
int main(){
    char string[100000];
    gets(string);
    int len = strlen(string);
    int sum = 0;
    for(int i=0;i<len;i++){
        if(string[i]>='A' && string[i]<='Z')
            sum += string[i] - 'A' + 1;
        if(string[i]>='a' && string[i]<='z')
            sum += string[i] - 'a' + 1;
    }
    int one = 0,zero = 0;
    while(sum!=0){
        if(sum%2==0)
            zero++;
        else
            one++;
        sum /= 2;
    }
    printf("%d %d",zero,one);
}