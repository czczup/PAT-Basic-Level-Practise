N,D = [int(i) for i in input().split(" ")]
cakeSum, profit = 0, 0 #月饼总量,总金额
# 用int(i)测试点2会报错
num = [eval(i) for i in input().split(" ")] # 月饼库存数量
money = [eval(i) for i in input().split(" ")] # 月饼总售价
cost = []
for i in range(N):
    cost.append(money[i] / num[i]) #月饼单位价
for i in range(N):
    maxNum = max(cost) # 取最大值
    maxIndex = cost.index(maxNum) # 并记录对应索引
    cakeSum = cakeSum + num[maxIndex] # 计入月饼总量
    if i == 0 and cakeSum > D: # 一种就够
        profit = D * cost[maxIndex]
        break
    if cakeSum < D: # 取全部
        profit += money[maxIndex]
    else: # 取一部分
        profit += (num[maxIndex] - (cakeSum-D)) * maxNum
        cakeSum = D
    num.pop(maxIndex)
    money.pop(maxIndex)
    cost.pop(maxIndex)
    if cakeSum == D:
        break
print("%.2f"%profit)