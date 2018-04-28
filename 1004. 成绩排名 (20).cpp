#include <stdio.h> 
typedef struct student{
    char name[11];
    char number[11];
    int score;
}student;

int checkMax(int maxScore,student list[],int n){ //查找获最高分的学生的下标 
    for(int i=0;i<n;i++){
        if(maxScore == list[i].score)
            return i;
    }
}

int checkMin(int minScore,student list[],int n){ //查找获最低分的学生的下标 
    for(int i=0;i<n;i++){
        if(minScore == list[i].score)
            return i;
    }
}

int main(){
    int n;
    scanf("%d",&n);
    student list[n];
    for(int i=0;i<n;i++){ //读入学生数据
        scanf("%s %s %d",&list[i].name,&list[i].number,&list[i].score);
    }
    int maxScore = 0,minScore = 100; //最高分高于0，最低分低于100
    for(int i=0;i<n;i++){
        maxScore = maxScore >= list[i].score ? maxScore : list[i].score;
        minScore = minScore < list[i].score ? minScore : list[i].score;
    }
    student topStu = list[checkMax(maxScore,list,n)];
    student midStu = list[checkMin(minScore,list,n)];
    printf("%s %s\n",topStu.name,topStu.number);
    printf("%s %s\n",midStu.name,midStu.number);
    return 0;
}
