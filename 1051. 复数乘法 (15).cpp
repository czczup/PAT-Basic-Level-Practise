#include <stdio.h>
#include <math.h>
int main()
{
	//(a+bi)*(c+di)=(ac-bd)+(ad+bc)i
	double R1,P1,R2,P2;
	scanf("%lf %lf %lf %lf",&R1,&P1,&R2,&P2);
	double A = R1*cos(P1)*R2*cos(P2) - R1*sin(P1)*R2*sin(P2);
	double B = R1*cos(P1)*R2*sin(P2) + R1*sin(P1)*R2*cos(P2);
	if(fabs(A) < 0.0001)
        A = 0;  
    if(fabs(B) < 0.0001)
        B = 0;  
	if(B<0)
		printf("%.2lf%.2lfi",A,B);
	else
		printf("%.2lf+%.2lfi",A,B);
}
/*分析：当A或者B小于0但是大于-0.01(比如-0.00001)时候，
如果按照A>=0的判断，会输出“-0.00”这样的结果,事实上
应该输出“0.00”【B同理，应该输出“+0.00i”】*/ 
