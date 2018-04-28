N = int(input())
inputNum = [int(i) for i in input().split(" ")]
callatz = [] # 记录每个数字的Callatz数列
result = [] # 记录不能其他数字所覆盖的数
for i in range(N):
    n = inputNum[i]
    num = []
    while n!=1:
        if n % 2==0:
            n = n / 2
        else:
            n = (3*n+1) / 2
        num.append(n)
    callatz.append(num)

for i in range(N):
    n = inputNum[i]
    flag = 0
    for j in range(N):
        if n in callatz[j]: # 判断数字是否被“覆盖”
            flag = 1
    if flag==0: # 未被“覆盖”
        result.append(n)

result.sort(reverse = True) # 从大到小排序
for i in range(len(result)):
    print(result[i],end='')
    if i!=len(result) - 1:
        print(' ',end='') # 最后一个数字后不输出空格
