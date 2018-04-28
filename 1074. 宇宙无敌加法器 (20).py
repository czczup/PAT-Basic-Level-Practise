table = [10 if int(i)==0 else int(i) for i in list(input())]
num1 = [int(i) for i in list(input().zfill(len(table)))]
num2 = [int(i) for i in list(input().zfill(len(table)))]
num = []
temp = 0
for i in range(len(table)-1,-1,-1):
    sum = num1[i] + num2[i] + temp
    if sum >= table[i]: # 需要进位
        num.append(sum % table[i])
    else:
        num.append(sum)
    temp = sum // table[i] # 进位
num.append(temp)
num.reverse()
print(int("".join([str(i) for i in num])))