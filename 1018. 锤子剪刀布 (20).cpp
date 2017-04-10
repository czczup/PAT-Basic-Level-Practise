/*1018. 锤子剪刀布 (20)*/
#include <stdio.h> 
int main()
{
    int cnt,i;
    scanf("%d",&cnt);
    int A[6]={0},B[6]={0};
    for(i=0;i<cnt;i++){
        char a,b;
        getchar();
        scanf("%c %c",&a,&b);
        if (a == 'C' && b == 'J')
            A[4]++;
        if (a == 'J' && b == 'B')
            A[5]++;
        if (a == 'B' && b == 'C')
            A[3]++;
        if (b == 'C' && a == 'J')
            B[4]++;
        if (b == 'J' && a == 'B')
            B[5]++;
        if (b == 'B' && a == 'C')
            B[3]++;
        if (b == a)
            A[1]++;
    }
    A[0] = A[3]+A[4]+A[5];
    B[0] = B[3]+B[4]+B[5];
    B[1] = A[1];
    A[2] = B[0];
    B[2] = A[0];
    int id1 = 3,id2 = 3;
    for(cnt=4;cnt<6;cnt++){
        if(A[cnt]>A[id1])
            id1 = cnt;
        if(B[cnt]>B[id2])
            id2 = cnt;
    }
    printf("%d %d %d\n",A[0],A[1],A[2]);
    printf("%d %d %d\n",B[0],B[1],B[2]);
    char idnum[3]={'B','C','J'};
    printf("%c %c",idnum[id1-3],idnum[id2-3]);
}
