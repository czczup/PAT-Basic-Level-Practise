#1020. 月饼 (25)
import sys
import re
N,D = map(int,sys.stdin.readline().split())
cost = []
sumofcake,moneynum = 0,0
#月饼总量,总金额
string1 = input()
num = re.findall(r"\d+\.?\d*",string1)
#月饼库存数量
string2 = input()
money = re.findall(r"\d+\.?\d*",string2)
#月饼总售价
for i in range(0,N):
    cost.append(eval(money[i])/eval(num[i]))
#月饼单位价
for i in range(0,N):
    maxnum = max(cost) 
    numidx = cost.index(maxnum)
    sumofcake = sumofcake + eval(num[numidx])
    #取最大值,并记录对应索引,直接计入月饼总量
    if i == 0 and sumofcake > D:
        moneynum = D * cost[numidx]
        break
    #一种就够
    if sumofcake < D:
        moneynum = moneynum + eval(money[numidx])
        #取全部
    else:
        moneynum = moneynum + (eval(num[numidx]) - (sumofcake - D)) * maxnum
        sumofcake = D
        #取一部分
    num.pop(numidx)
    money.pop(numidx)
    cost.pop(numidx)
    #删除最大记录
    if sumofcake == D:
        break
print("%.2f"%moneynum)
  
