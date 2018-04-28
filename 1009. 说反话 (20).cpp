#include <stdio.h>
int main(){
    char words[40][20],str[40];
    int record;
    for(int n=0;n<20;n++){
        scanf("%s",words[n]);
        str[n] = getchar();
        if(str[n]=='\n'){
            record = n;
            break;
        }
    }
    for(int n=record;n>=0;n--){
        printf("%s",words[n]);
        if(n!=0){
            printf(" ");
        }
    }
} 
