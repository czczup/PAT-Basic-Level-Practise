#include <stdio.h>
#include <math.h>
#include <map>
using namespace std;
int image[1002][1002]={0}; //在图片外围一圈0 
bool judge(int x,int y,int TOL){
    for(int loc_x=-1;loc_x<=1;loc_x++){
        for(int loc_y=-1;loc_y<=1;loc_y++){
            if(!(loc_x==0 && loc_y==0)){
                if(abs(image[x][y]-image[x+loc_x][y+loc_y]) <= TOL)
                    return false;
            }   
        }     
    }
    return true;
}
    
int main(){
    int M,N,TOL;
    scanf("%d %d %d",&M,&N,&TOL);  
    map<int, int> time;
    for(int y=1;y<=N;y++){
        for(int x=1;x<=M;x++){
            scanf("%d",&image[x][y]);
            time[image[x][y]]++; //统计每个数字的出现次数 
        }
    }
    int temp_x = 0,temp_y = 0,cnt = 0;
    for(int y=1;y<=N;y++){
        for(int x=1;x<=M;x++){
            if(judge(x,y,TOL) && time[image[x][y]] == 1){
                temp_x = x; //记录特殊点的坐标 
                temp_y = y;
                cnt++; //统计特殊点的个数 
            }
        }
    }     
    if(cnt == 1)
        printf("(%d, %d): %d\n",temp_x,temp_y, image[temp_x][temp_y]);
    else if(cnt == 0)
        printf("Not Exist");
    else
        printf("Not Unique");
}

