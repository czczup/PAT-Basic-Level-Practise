#include <stdio.h>
#include <math.h>
int main(){
    int n;
    double max = 0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int a,b;//a+bi
        scanf("%d %d",&a,&b);
        double temp = sqrt(a*a + b*b);
        max = max > temp ? max : temp;
    }
    printf("%lf",max);
}