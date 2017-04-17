#不空置 0 可能空置 1 空置 2
#N,e,D = [eval(item) for item in input("").split(' ')]
N,e,D = input("").split(' ')
N,D = eval(N),eval(D)
amount = [0,0,0] # [不空置,可能空置,空置]
for i in range(N):
    flag,day = 0,0 #先假设房屋不空置,用电量低的日子为0天
    #data = [eval(item) for item in input("").split(' ')] #计算量太大会导致超时
    #K = data[0] #观察的天数
    data = input("").split(' ')
    K = eval(data[0]) #观察的天数
    for j in range(1,len(data)):
        if data[j] < e: #用电量低于某给定的阈值e
            day += 1
    if day > K / 2: #超过一半的日子
        flag = 1 #可能空置
    if flag == 1 and K > D: #满足上一个条件且观察期超过某给定阈值D天
        flag = 2 #空置
    amount[flag] += 1
print("%.1f%% %.1f%%"%((amount[1]/N*100),(amount[2]/N*100)))

#原本的类型转换计算量过大导致超时，现不转换直接比较即可通过