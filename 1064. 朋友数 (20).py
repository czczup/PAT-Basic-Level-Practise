#输入部分
FriSum = [0 for i in range(37)] #下标表示朋友证号
N = eval(input(""))
FriNum = [int(i) for i in input("").split(" ")]

#对每一个数字计数
for i in range(len(FriNum)):
    sum = 0
    while FriNum[i]!=0:
        sum += FriNum[i] % 10
        FriNum[i] = FriNum[i] // 10
    FriSum[sum] += 1

查找非零项
result = []
for i in range(37):
    if FriSum[i] != 0:
        result.append(i)

#输出部分
print(len(result))
print(result[0],end='')
for i in range(1,len(result)):
    print(" %d"%result[i],end='')
