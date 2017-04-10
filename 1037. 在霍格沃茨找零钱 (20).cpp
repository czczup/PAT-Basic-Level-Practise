/*1037. 在霍格沃茨找零钱 (20)*/
/*十七个(Sickle)兑一个(Galleon)，二十九个(Knut)兑一个(Sickle)*/
#include <stdio.h>
#include <math.h>
int main()
{
	int Galleon,Sickle,Knut;//商品价格 
	scanf("%d.%d.%d",&Galleon,&Sickle,&Knut);
	int galleon,sickle,knut;//哈利波特带的钱 
	scanf("%d.%d.%d",&galleon,&sickle,&knut);
	int Money = (Galleon*17 + Sickle)*29 + Knut;
	int money = (galleon*17 + sickle)*29 + knut;
	int g,s,k,charge;//找零 
	charge = money - Money;
	k = abs(charge % 29);
	s = abs((charge / 29) % 17);
	g = (charge / 29) / 17;
	printf("%d.%d.%d",g,s,k);
}

